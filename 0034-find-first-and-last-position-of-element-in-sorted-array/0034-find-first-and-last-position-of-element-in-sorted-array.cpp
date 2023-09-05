class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        
        
        vector<int> v;
       if(nums.size()==0)
        {
             v.push_back(-1);
            v.push_back(-1);
            return v;
        }
        int l=0, h=nums.size()-1;
        while(l<h)
        {
            int mid = l + (h-l)/2;
            if(nums[mid] >= target)
                h = mid;
            else if(nums[mid]<target)
                l=mid+1;
            
            
}
        if(nums[l]== target)
        {
            v.push_back(l);
            while(l<nums.size()-1 && nums[l+1]==target)
            {
                l++;
            }
            v.push_back(l);
        }
        else
        {
            v.push_back(-1);
            v.push_back(-1);
        }       
  return v;  }
};