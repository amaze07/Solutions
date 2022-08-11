class Solution {
public:
    int f(int i, int flag,  vector<int> &p, vector<vector<int>> &dp){
        if(i >= p.size()) return 0;
        if(dp[i][flag] != -1) return dp[i][flag];
        long profit = 0;
        if(flag) profit = max(-p[i] + f(i+1, 0, p, dp), f(i+1, 1, p, dp));
        else profit = max(p[i] + f(i+2, 1, p, dp), f(i+1, 0, p, dp));
        return dp[i][flag] = profit;
    }
    int maxProfit(vector<int>& prices) {
        vector<vector<int>> dp(prices.size(), vector<int> (2, -1));
        return f(0, 1, prices, dp);
    }
};