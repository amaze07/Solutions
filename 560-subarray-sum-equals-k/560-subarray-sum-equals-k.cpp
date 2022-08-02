class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0, psum = 0;
        unordered_map<int,int> um;
        for(int i = 0; i < nums.size(); i++){
            psum += nums[i];
            if(psum == k) count+=1;
            if(um.find(psum-k) != um.end()){
                count += um[psum-k];
            }
            um[psum]++;
        }
        return count;
    }
};