class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
      unordered_map<int, int>mp;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
                mp[nums[i]]++;
        }
        for(auto i=mp.begin();i!=mp.end();i++)
        {
            if(i->second>nums.size()/3)
                v.push_back(i->first);
        }
        return v;  
    }

};