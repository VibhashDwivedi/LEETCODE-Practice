class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        string ans1="", ans2="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i] != '#')
                st.push(s[i]);
            else if(!st.empty())
                st.pop();
        }
        while(!st.empty())
        {
            ans1=ans1+st.top();
            st.pop();
        }
        
        for(int i=0;i<t.length();i++)
        {
            if(t[i] != '#')
                st.push(t[i]);
            else if(!st.empty())
                st.pop();
        }
        while(!st.empty())
        {
            ans2=ans2+st.top();
            st.pop();
        }
        if(ans1==ans2)
            return true;
        else
            return false;
    }
};