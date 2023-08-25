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
    ListNode* swapPairs(ListNode* head) {
     
        if(!head || head->next==NULL)
            return head;
        ListNode * q = new ListNode();
        ListNode *result=q;
        ListNode *p =head;
        
        while(p && p->next)
        {
            q->next=p->next;
            p->next=q->next->next;
            q->next->next=p;
            
            q=p;
            p=p->next;
        }
        return result->next;
        
        
    }
};