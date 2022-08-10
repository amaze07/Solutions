class Solution {
public:
    // int f(int i, int e, vector<int>& a, vector<int> & dp){
    //     if(i == e) return e;
    //     else if(i > e) return i;
    //     if(dp[i] != -1) return dp[i];
    //     int ans = 0;
    //     for(int j = 1; j <= a[i]; i++){
    //         if(j > e) return false;
    //         ans = f(i+j, e, a, dp);
    //         if(ans == e) break;
    //     }
    //     return dp[i] = ans;
    // }
    // bool canJump(vector<int>& nums) {
    //     vector<int> dp(nums.size(), -1);
    //     int ans = f(0, nums.size() - 1, nums, dp);
    //     if(ans == nums.size() - 1) return true;
    //     else return false;
    // }
    bool canJump(vector<int>& nums) {
        vector<int> dp(nums.size(), false);
        dp[nums.size()-1] = true;
        int ans = 0;
        for(int i = nums.size()-2; i >= 0; i--){
            for(int j = 1; j <= nums[i]; j++){
                if(i+j < nums.size() && dp[i+j]){
                    dp[i] = true;
                    break;
                }   
            }
        }
        return dp[0];
    }
};