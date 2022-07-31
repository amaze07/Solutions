class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> ans;
        vector<int> v1(26, 0);
        for(auto i : words2){
            vector<int> temp(26, 0);
            for(auto j: i){
                temp[j-'a']++;
            }
            for(int j = 0; j < 26; j++){
                v1[j] = max(v1[j], temp[j]);
            }
        }
        for(auto i : words1){
            vector<int> v2(26, 0);
            int flag = 1;
            for(auto j : i){
                v2[j-'a']++;
            }
            for(int j = 0; j < 26; j++){
                if(v2[j] < v1[j]){ 
                    flag = 0;
                    break;
                }
            }
            if(flag == 1) ans.push_back(i);
        }
        return ans;
    }
};