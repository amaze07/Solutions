class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN, maxi = 0;
        for(int i = 0; i < nums.size(); i++){
            maxi += nums[i];
            maxSum = max(maxi, maxSum);
            if(maxi < 0) maxi = 0;
        }
        return maxSum;
    }
};