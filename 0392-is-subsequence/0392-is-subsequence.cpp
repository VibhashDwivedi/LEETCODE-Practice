class Solution {
public:
    bool isSubsequence(string s, string t) {
      
      int i, j;
      for(i=0,j=0; j<t.length();)
      {
          if(s[i]==t[j])
          {
              i++;
              j++;
          }
          else
          {
              j++;
          }
      }
        if(i==s.length())
            return true;
        else
            return false;
    }
};