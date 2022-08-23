class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int cnt = 0, c = 0;
        for(int i = 0; i < s.length()-1; i++){
            if(s[i] == '0' && s[i+1] == '1')
                cnt++;
        }
        if(cnt == 0) return 0;
        else{
            while(cnt != 0){
                for(int i = 0; i < s.length()-1; i++){
                    if(s[i] == '0' && s[i+1] == '1'){
                        s[i] = '1';
                        s[i+1] = '0';
                        i++;
                    }
                }
                c++;
                // cout << s << endl;
                cnt = 0;
                for(int i = 0; i < s.length()-1; i++){
                    if(s[i] == '0' && s[i+1] == '1')
                        cnt++;
                }   
            }
        }
        return c;
    }
};