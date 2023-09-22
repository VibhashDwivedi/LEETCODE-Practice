class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        unordered_map<int, int>mp;
        for(int i=0;i<=n;i++)
        {
            mp[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        for(auto it=mp.begin(); it !=mp.end();it++)
        {
            if(it->second ==0)
                return it->first;
        }
        return -1;
    }
};