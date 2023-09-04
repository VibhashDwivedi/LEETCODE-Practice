/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
     ListNode* reverse(ListNode *head)
    {
        if(!head || !head->next)
            return head;
        
        ListNode *p=head, *q=NULL, *r=NULL;
        
        while(p)
        {
            r=q;
            q=p;
           
             p=p->next;
             q->next=r;
        }
        head=q;
       return head;
    }
    
    
    ListNode* doubleIt(ListNode* head) {
        ListNode *r1 = head;;
        head = reverse(r1);
        ListNode* ans = new ListNode();
        ListNode *temp=ans;
        int c=0;
        while(head ||c)
        {
            int sum=0;
            if(head)
            {
               sum= 2*head->val;
                head=head->next;
            }
            if(c)
            {
                sum=sum + c;
            }
            c=sum/10;
            ListNode *node = new ListNode(sum%10);
            temp->next= node;
            temp=temp->next;
        
        }
        
        ListNode* dbl ;
        dbl = reverse(ans->next);
        
        return dbl;
        
    }
};