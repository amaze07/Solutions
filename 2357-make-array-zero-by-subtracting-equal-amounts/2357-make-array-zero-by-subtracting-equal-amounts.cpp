class Solution {
public:
    int minimumOperations(vector<int>& nums){
        vector<int> v;
        for(int i = 0; i < nums.size(); i++){
            cout << nums[i] << " ";
            if(nums[i] != 0 && (find(v.begin(), v.end(), nums[i]) == v.end())){
                v.push_back(nums[i]);
            }
        }
        return v.size();
    }
};