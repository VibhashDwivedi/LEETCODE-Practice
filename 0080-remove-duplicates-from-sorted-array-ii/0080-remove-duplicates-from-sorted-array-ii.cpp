class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int>mp;
        int n= nums.size();
        int i=0, j=1;
        while(j<n)
        {
            if(nums[i]==nums[j] && mp.find(nums[j]) != mp.end())
                j++;
            else if(nums[i] == nums[j] && mp.find(nums[j]) == mp.end())
            {
                 nums[i+1]=nums[j];
                i++;
                j++;
                mp[nums[i]]++;
            }
            else{
                nums[i+1]=nums[j];
                i++;
                j++;
            }
        }
        return i+1;
    }
};