class Solution {
public:
    string reverseWords(string s) {
        
        vector<string>temp;
        string ans="";
        
        int n = s.length();
        for(int i=0;i<n;)
        {
            string x="";
            while(s[i]==' ' &&i<n)
                i++;
            while(s[i]!=' ' && i<n)
                x+=s[i++];
         if(x !="")
            temp.push_back(x);
        }
        
        for(int i= temp.size()-1; i>0;i--)
        {
              ans= ans+ temp[i]+' ';
        }
        ans+= temp[0];
        return ans;
    }
};