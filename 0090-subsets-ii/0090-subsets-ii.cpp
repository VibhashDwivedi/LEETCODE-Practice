class Solution {
public:
    
    void helper(int i, vector<int> &nums, vector<int>v, set<vector<int>>&temp)
    {
        
        if(i == nums.size()){
            temp.insert(v);
            return;
        }
         v.push_back(nums[i]);
        helper(i+1, nums, v, temp);
        
      v.pop_back();
        
        helper(i+1, nums, v, temp);
       
            
    }
    
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        vector<int>v;
        vector<vector<int>>ans;
         set<vector<int>>temp;
        
        
       
        helper(0, nums, v, temp);
        
        
        for(auto it = temp.begin(); it != temp.end();it++)
        {
            ans.push_back(*it);
        }
        return ans;
       
    }
};