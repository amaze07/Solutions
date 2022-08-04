class Solution {
public:
    int reverse(int x) {
        string y = to_string(x);
        int n = y.length();
        if(y[0] == '-') n = n-1;
        long long a = n, ans = 0;
        for(int i = 0; i < n; i++){
            int mod = x%10;
            ans += mod*pow(10, a-1);
            --a;
            x /=10;
        }
        if(ans < INT_MIN || ans > INT_MAX) return 0;
        return ans;
    }
};