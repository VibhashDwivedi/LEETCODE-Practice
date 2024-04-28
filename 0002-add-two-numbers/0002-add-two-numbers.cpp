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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans = new ListNode();
        ListNode * p = NULL, *q;
        int c=0;
        q=ans;
        while(l1 || l2 ||c)
        {
            int sum=0;
            if(l1)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2)
            {
                sum += l2->val;
                l2 = l2 ->next;
            }
            if(c)
            {
                sum +=c;
            }
            
            p = new ListNode(sum% 10);
            q->next=p;
            q=q->next;
            c= sum/10;
            
        }
        return ans->next;
        
    }
};