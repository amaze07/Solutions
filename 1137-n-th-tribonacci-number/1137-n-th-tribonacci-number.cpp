class Solution {
public:
    int tribonacci(int n) {
        if(n == 0) return 0;
        if(n == 1 || n == 2) return 1;
        long long prev3 = 0, prev2 = 1, prev1 = 1;
        for(int i = 2; i < n; i++){
            long long curri = prev3 + prev2 + prev1;
            prev3 = prev2;
            prev2 = prev1;
            prev1 = curri;
        }
        return prev1;
    }
};