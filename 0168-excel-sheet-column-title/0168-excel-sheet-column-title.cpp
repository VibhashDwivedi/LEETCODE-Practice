class Solution {
public:
    string convertToTitle(int columnNumber) {
        string temp="";
       
        while(columnNumber)
        {
          columnNumber--;
            int rem= columnNumber % 26;
            
           temp= (char)(rem+65)+temp;
           
            columnNumber= columnNumber/26;
           
            
        } 
        return temp;
    }
};