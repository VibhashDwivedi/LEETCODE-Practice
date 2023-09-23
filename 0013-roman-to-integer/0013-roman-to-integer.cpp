// class Solution {
// public:
//     int romanToInt(string s) {
//         int ans=0;
//         unordered_map <char,int> mp{
//         {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};

//     for(int i=0;i<s.size();i++){
//         if(mp[s[i]]<mp[s[i+1]]){
            
//             ans=ans-mp[s[i]];
//         }
//         else{
//             ans=ans+mp[s[i]];
//         }
//     }
//         return ans;
//     }
// };

class Solution {
public:
    int romanToInt(string s) {
        
      int n = s.size();
       int num=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='I')
            {
                if (s[i+1]=='V')
                    num=num-1;
                else if (s[i+1]=='X')
                    num=num-1;
                else
                    num=num+1;
            }
            
            else if(s[i]=='V')
                num=num+5;
            else if (s[i]=='X')
            {
                if(s[i+1]=='L')
                    num=num-10;
                else if(s[i+1]=='C')
                    num=num-10;
                else
                    num=num+10;
            }
            else if(s[i]=='L')
                num=num+50;
            else if(s[i]=='C')
            {
                if(s[i+1]=='D')
                    num=num-100;
                else if(s[i+1]=='M')
                    num=num-100;
                else 
                    num=num+100;
            }
            else if(s[i]=='D')
                num=num+500;
            else if (s[i]=='M')
                num=num+1000;
            
            
        }
        return num;
    }
};