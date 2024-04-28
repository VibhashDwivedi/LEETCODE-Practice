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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode *ans = new ListNode();
        ListNode *temp = new ListNode();
        ListNode *p;
        if(list1 == NULL)
            return list2;
        if(list2 == NULL)
            return list1;
        if(list1->val < list2->val)
        {
            ans = new ListNode(list1->val);
            list1= list1->next;
        }
        else{
            ans = new ListNode(list2->val);
            list2 = list2->next;
        }
        p= ans;
        while(list1 && list2)
        {
            if(list1->val < list2->val)
        {
            temp = new ListNode(list1->val);
            p->next= temp;
            p= temp;    
            list1= list1->next;
        }
        else{
            temp = new ListNode(list2->val);
             p->next= temp;
            p= temp;
            list2 = list2->next;
        } 
            
        }
        
        while(list1)
        {
            temp = new ListNode(list1->val);
           
            p->next= temp;
            p= temp;    
            list1= list1->next;
        }
        
        while(list2)
        
        {
             temp = new ListNode(list2->val);
             p->next= temp;
            p= temp;
            list2 = list2->next;
        }  
        
        
        
        
        return ans;
        
        
    }
};