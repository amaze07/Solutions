class Solution {
public:    
    int rob(vector<int>& nums) {
        int next2 = 0, next1 = 0;
        for(int i = nums.size() - 1; i >= 0; i--){
            int p = nums[i] + next2;
            int np = next1;
            int curri = max(p, np);
            next2 = next1;
            next1 = curri;
        }
        return next1;
    }
};