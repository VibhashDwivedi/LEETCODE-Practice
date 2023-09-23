class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string temp= strs[0];
        string ans="";
        for(int i=0;i<temp.length();i++)
        {
        for(int j=1;j<strs.size();j++)
        {
            if(temp[i] != strs[j][i])
                return ans;
            
        }
            ans += temp[i];
        }
        return ans;
    }
};