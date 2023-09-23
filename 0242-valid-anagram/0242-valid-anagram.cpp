class Solution {
public:
    bool isAnagram(string s, string t) {
        
//         vector<int> check(26,0);
//         for(int i=0;i<s.length();i++)
//             check[s[i]-'a']++;
        
//         for(int i=0;i<t.length();i++)
//             check[t[i]-'a']--;
//         for(int i=0;i<26;i++)
//         {
//             if(check[i]!=0)
//                 return false;
//         }
        
//         return true;
        
        
        
        unordered_map<char, int>mp;
        
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        
        
        for(int i=0;i<t.length();i++)
        {
            if(mp.find(t[i]) != mp.end())
            {
                if(mp[t[i]]>1)
                    mp[t[i]]--;
                else
                    mp.erase(t[i]);
            }
            else
                return false;
        }
        
        if(mp.empty())
            return true;
        else
            return false;
    }
};