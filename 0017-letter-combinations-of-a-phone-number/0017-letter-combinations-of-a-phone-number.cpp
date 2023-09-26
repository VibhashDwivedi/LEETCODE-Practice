class Solution {
public:
    
    void helper(int i, vector<string>&ans,string digits, string temp, vector<string>ref )
    {
        if(i>= digits.length())
        {
            ans.push_back(temp);
            return;
        }
        
        int number = digits[i]-'0';
        string value = ref[number];
        
        for(int j=0;j<value.length();j++)
        {
            temp.push_back(value[j]);
            helper(i+1, ans, digits, temp, ref);
             temp.pop_back();
        }
        
    }
    
    
    
    
    vector<string> letterCombinations(string digits) {
       
        vector<string>ans;
        if(digits.length()==0)
            return ans;
         string temp;
        vector<string>ref{"","","abc","def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
         helper(0, ans, digits, temp, ref);
        return ans;
    }
};