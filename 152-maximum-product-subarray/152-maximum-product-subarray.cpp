class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProduct = INT_MIN, maxi1 = 1;
        for(int i = 0; i < nums.size(); i++){
            maxi1 *= nums[i];
            maxProduct = max(maxi1, maxProduct);
            if(maxi1 == 0) maxi1 = 1;
        }
        int maxi2 = 1;
        for(int i = nums.size() - 1; i >= 0; i--){
            maxi2 *= nums[i];
            maxProduct = max(maxi2, maxProduct);
            if(maxi2 == 0) maxi2 = 1;
        }
        return maxProduct;
    }
};