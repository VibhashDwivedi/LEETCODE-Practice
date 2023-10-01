class Solution {
public:
     string reverseString(string s) {
       // string reverse="";
        int n= s.length();
        for(int i=0;i<n/2;i++)
        {
            swap(s[i], s[n-1-i]);
        }
         return s;
       
    }
    
    string reverseWords(string s) {
     string ans="";
        string str="";
        int n= s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i] !=' ')
                str+=s[i];
            else
            {
                str=reverseString(str);
                ans+=str+" ";
                str="";
            }
        }
       str= reverseString(str);
        ans=ans+str;
        return ans;
    }
};