class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        if(s.length()==0)
            return true;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                st.push(s[i]);
            else if(st.empty() || st.top()=='(' && s[i]!=')' || st.top()=='{' && s[i] != '}' || st.top()=='[' && s[i] != ']')
                return false;
            else st.pop();
        }
        
        if (st.empty())
            return true;
        return false;
    }
};