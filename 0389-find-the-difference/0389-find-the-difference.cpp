class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> mp;
        char ans;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        for(int j =0;j<t.length();j++)
        {
            if(mp[t[j]]==0)
                ans = t[j];
            mp[t[j]]--;
        }
        return ans;
    }
};