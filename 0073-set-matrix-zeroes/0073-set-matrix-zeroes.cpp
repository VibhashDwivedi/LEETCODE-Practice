class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        set<int>rows;
        set<int>cols;
        int m= matrix.size();
        int n= matrix[0].size();
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        
         for(int i=0;i<m;i++)
        {
            if(rows.find(i) != rows.end())
            {
                for(int j=0;j<n;j++)
                {
                    matrix[i][j]=0;
                }
            }
             
        }
        
         for(int i=0;i<n;i++)
        {
            if(cols.find(i) != cols.end())
            {
                for(int j=0;j<m;j++)
                {
                    matrix[j][i]=0;
                }
            }
             
        }
        
        
       
        
        
    }
};