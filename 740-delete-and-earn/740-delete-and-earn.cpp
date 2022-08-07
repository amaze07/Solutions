class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int maxi = *max_element(nums.begin(), nums.end());
        vector<int> v(maxi + 1, 0);
        for(int i = 0; i < nums.size(); i++){
            v[nums[i]]++;
        }
        vector<int> dp(maxi+1, 0);
        dp[1] = v[1]*1;
        for(int i = 2; i < v.size(); i++){
            dp[i] = max(dp[i-1], dp[i-2] + v[i]*i);
        }
        return dp[maxi];
    }
};