class Solution {
public:
    vector<int> getRow(int numRows) {
         vector<vector<int>>ans;
        int i=0;
        for( i=0;i<numRows;i++)
        {
            vector<int>temp;
            for(int j=0;j<=i;j++)
            {
                if(j==0 || j==i)
                   temp.push_back(1);
                else
                    temp.push_back(ans[i-1][j-1]+ans[i-1][j]);
            }
            ans.push_back(temp);
        }
         vector<int>temp;
        for(int j=0;j<=i;j++)
        {    
             if(j==0 || j==i)
                   temp.push_back(1);
                else
                    temp.push_back(ans[i-1][j-1]+ans[i-1][j]);
        }
        return temp;
    }
};