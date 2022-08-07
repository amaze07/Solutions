class Solution {
public:
    int climbStairs(int n) {
        int j = 1, k = 1, curri = 0;
        for(int i = 1; i < n; i++){
            int curri = j + k;
            j = k;
            k = curri;
        }
        return k;
    }
};