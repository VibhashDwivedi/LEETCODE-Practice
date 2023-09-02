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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     ListNode* p, *q, *first;
        p=head;
        first=head;
      
        int len=0;
       while(p)
       {
         len++;
           p=p->next;
       }
        if(len==1)
        {
            return NULL;
        }
        if(len==n)
        {
            head=head->next;
            return head;
        }
       int l = len-n;
        for(int i=0;i<l-1;i++)
        {
            
            first=first->next;
        }
        
        first->next=first->next->next;
       
        return head;
           
        
    }
};