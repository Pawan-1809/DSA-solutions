class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = s.length();
        string temp;
        for(int i = 0; i<n ;i++){
            while(indices[i]!=i){
                int t = indices[i];
                swap(s[i], s[t]);
                swap(indices[i], indices[t]);
            }
        }
        return s;
    }
};
