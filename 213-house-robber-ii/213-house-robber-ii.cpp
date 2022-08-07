class Solution {
public:
    int f(vector<int> &v){
        int next2 = 0, next1 = 0;
        for(int i = v.size()-1; i >= 0; i--){
            int p = v[i] + next2;
            int np = next1;
            int curri = max(p, np);
            next2 = next1;
            next1 = curri;
        }
        return next1;
    }
    
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        if(nums.size() == 2) return max(nums[0], nums[1]);
        vector<int> v1(nums.begin(), nums.end()-1);
        vector<int> v2(nums.begin()+1, nums.end());
        return max(f(v1), f(v2));
    }
};