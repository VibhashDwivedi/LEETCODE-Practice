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
    bool isPalindrome(ListNode* head) {
        int flag =0;
        vector<int> v;
        struct ListNode* p=head;
        while(p!=NULL)
        {
            v.push_back(p->val);
            p=p->next;
        }
        int n= v.size();
        for(int i=0;i<=n/2 && n!=0;i++)
        {
            if(v[i]!=v[n-1-i])
            {
                flag =1;
                break;
            }
        }
        if(flag==1)
            return false;
        else return true;
    }
};