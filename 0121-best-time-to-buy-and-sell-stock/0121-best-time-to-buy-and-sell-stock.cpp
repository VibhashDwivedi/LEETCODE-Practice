class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n =prices.size();
        vector<int>maxm(n,0);
        for(int i=n-1;i>0;i--)
        {
          maxm[i-1]=max(maxm[i],prices[i]);  
            
        }
        int max_profit=0;
        for(int i=0;i<n;i++)
        {
            int diff= maxm[i]-prices[i];
            max_profit=max(max_profit, diff);
        }
        return max_profit;
    }
};