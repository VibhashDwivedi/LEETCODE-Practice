class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       
        int j=0;
         while(j<nums2.size())
           nums1.push_back(nums2[j++]);
        sort(nums1.begin(),nums1.end());
        
        
        int len = nums1.size();
         
        if((len%2)==0)
        {
          int mid=len/2;
            return double(nums1[mid]+nums1[mid-1])/2;
        }
        else
        {
            return nums1[(len/2)];
        }
     
        
    }
};