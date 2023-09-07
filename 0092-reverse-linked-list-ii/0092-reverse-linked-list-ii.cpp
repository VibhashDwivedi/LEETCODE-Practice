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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* p, *q, *r, *s, *t;
        p=head;
        q=NULL;
        r=NULL;
        if( head==NULL)
        {
            return head;
        }
        while(left>1)
        {
            q=p;
            p=p->next;
            left--;
            right--;
        }
        t=q;
       s=p;
        q=NULL;
        while(right)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
            right--;
            
        }
      if(t!=NULL)
          t->next=q;
        else 
            head=q;
        
      s->next=p;
        return head;
    }
};