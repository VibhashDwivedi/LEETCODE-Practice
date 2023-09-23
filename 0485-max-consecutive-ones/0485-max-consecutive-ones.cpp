class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int sum=0;
        int temp=0;
       
        for(int i=0;i<nums.size();i++)
        {
         temp= temp+nums[i];
            if(temp>sum)
                sum=temp;
            if(nums[i]==0)
                temp=0;
            
        }
     return sum;   
    }
};