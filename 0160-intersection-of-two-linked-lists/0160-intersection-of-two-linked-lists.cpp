/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode *p= headA, *q=headB;
        int a=0, b=0;
        
        while(p)
        {
            a++;
            p=p->next;
        }
       
        while(q)
        {
            b++;
            q=q->next;
        }
        
        while(a>b)
        {
            a--;
            headA=headA->next;
        }
        
        while(b>a)
        {
            b--;
            headB=headB->next;
        }
        
        while(headA != headB)
        {
            headA=headA->next;
            headB=headB->next;
        }
        
        return headA;
    }
    
};