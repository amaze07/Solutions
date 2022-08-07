class Solution {
public:
    int f(int i, vector<int> &cost){
        if(i == 0 || i == 1) return cost[i];
        int prev2 = cost[0], prev1 = cost[1], curri = 1;
        for(int j = 2; j <= i; j++){
            curri = cost[j] + min(prev2, prev1);
            prev2 = prev1;
            prev1 = curri;
        }
        return prev1;
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        return min(f(n-1, cost), f(n-2, cost));
        
    }
};