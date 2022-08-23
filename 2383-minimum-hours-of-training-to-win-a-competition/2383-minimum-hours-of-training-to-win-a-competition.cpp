class Solution {
public:
    int minNumberOfHours(int en, int ex, vector<int>& ene, vector<int>& exp) {
        int n = ene.size();
        int x = 0;
        for(int i = 0; i < n; i++){
            // cout << en << " " << ene[i] << ":" << ex << " " << exp[i] << endl;
            if(en <= ene[i] && ex <= exp[i]){
                x = x + ene[i] - en + 1;
                x = x + exp[i] - ex + 1;
                en = en + (ene[i] - en + 1);
                ex = ex + (exp[i] - ex + 1);
            }
            else if(en <= ene[i]){
                x = x + ene[i] - en + 1;
                en = en + (ene[i] - en + 1);
            }
            else if(ex <= exp[i]){
                x = x + exp[i] - ex + 1;
                ex = ex + (exp[i] - ex + 1);
            }
            // cout << en << " " << ene[i] << ":" << ex << " " << exp[i] << endl;
            // cout << x << endl;
            en -= ene[i];
            ex += exp[i];
        }
        return x;
    }
};