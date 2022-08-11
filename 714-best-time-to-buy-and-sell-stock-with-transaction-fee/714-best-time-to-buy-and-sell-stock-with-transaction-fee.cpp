class Solution {
public:
    int f(int i, int flag, vector<int> &p, int fee, vector<vector<int>> &dp){
        if(i == p.size()) return 0;
        if(dp[i][flag] != -1) return dp[i][flag];
        long profit = 0;
        if(flag) profit = max(-p[i] + f(i+1, 0, p, fee, dp), f(i+1, 1, p, fee, dp));
        else profit = max(p[i] - fee + f(i+1, 1, p, fee, dp), f(i+1, 0, p, fee, dp));
        return dp[i][flag] = profit;
    }
    
    int maxProfit(vector<int>& prices, int fee) {
        vector<vector<int>> dp(prices.size(), vector<int> (2, -1));
        return f(0, 1, prices, fee, dp);
    }
};