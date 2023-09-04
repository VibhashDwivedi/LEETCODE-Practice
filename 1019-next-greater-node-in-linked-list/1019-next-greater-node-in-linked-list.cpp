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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> v;
        while (head != NULL) {
            v.push_back(head->val);
            head = head->next;
        }
        
        int n = int(v.size());
        stack<int> iStack;
        vector<int> ans(n,0);
        
        for (int i = 0; i < n; ++i) {
            while (!iStack.empty() && v[iStack.top()] < v[i]) {
                int smaller = iStack.top();
                iStack.pop();
                ans[smaller] = v[i];
            }
            iStack.push(i);
        }
        
        return ans;
    }
};