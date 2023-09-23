class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int p=nums.size()-1;
        
        for(int i=0;i<nums.size();i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;
            int l1=i+1;
            while(l1<p)
            {
                 int l2=l1+1;
                 int r=p;
                while(l2<r){
                     long long int  sum = (long)nums[i]+(long)nums[l1]+(long)nums[l2]+(long)nums[r];
                if(sum>target)
                    r--;
                else if(sum<target)
                 l2++;
                
                else
                {
                    ans.push_back(vector<int>{nums[i],nums[l1],nums[l2],nums[r]});
                        while(l2<r && nums[l2]==nums[l2+1])
                            l2++;
                        
                    while(l2<r && nums[r]==nums[r-1])
                        r--;
                    
                    r--;
                    l2++;
                }
            }
                while(l1<p &&nums[l1]==nums[l1+1])
                            l1++;
                l1++;
                
                
        }
        }
        return ans;
    }
};