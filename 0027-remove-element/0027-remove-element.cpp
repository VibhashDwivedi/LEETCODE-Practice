class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n= nums.size();
        int ans=0;
        int i= 0, j= n-1;
        while(i<=j)
        {
            if(nums[i]==val)
            {
                nums[i]= nums[j];
                j--;
               ans++;
            }
           else i++;
        }
         return n-ans;
    }
};