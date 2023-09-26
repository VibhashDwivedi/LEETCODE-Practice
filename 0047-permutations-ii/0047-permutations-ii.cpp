class Solution {
public:
    
    void helper(vector<int>nums, int i, set<vector<int>>&s)
    {
        if(i== nums.size()){
            s.insert(nums);
            return;
        }
       // helper(nums, i+1, s);
        
        for(int j=i;j<nums.size();j++)
        {
              // if (nums[i]!=nums[j]){
            swap(nums[i],nums[j]);
            helper(nums, i+1, s);
            swap(nums[i], nums[j]);
        }
        //
        
        
        
        
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
         vector<vector<int>>ans;
        set<vector<int>>s;
        sort(nums.begin(), nums.end());
        helper(nums, 0, s);
        
        for( auto it = s.begin(); it != s.end();it++)
        {
            ans.push_back(*it);
        }
        return ans;
    
        
    }
};