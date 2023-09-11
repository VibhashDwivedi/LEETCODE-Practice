class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int i=0, j=0, ans=0,  n=s.length();
        unordered_set<char> s1;
        while(i<n)
        {
            if(s1.find(s[i])==s1.end())
            {
                s1.insert(s[i++]);
                ans =max (ans, i-j);
            }
            else
            {
                s1.erase(s[j++]);
            }
        }
        return ans;
        
    
    }
};