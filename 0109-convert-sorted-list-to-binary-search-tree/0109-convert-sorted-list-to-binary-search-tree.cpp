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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        return createTree(head, NULL);
    }
    
    TreeNode * createTree(ListNode* head, ListNode* tail)
    {
        if (head==tail)
            return NULL;
        
        ListNode* mid = head, *temp=head;
        while(temp!=tail && temp->next!=tail)
        {
            mid=mid->next;
            temp= temp->next->next;
        }
        
        TreeNode *ans = new TreeNode(mid->val);
            ans->left = createTree(head, mid);
        ans->right= createTree(mid->next, tail);
        return ans;
    }
};