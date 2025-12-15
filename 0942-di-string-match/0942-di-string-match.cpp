class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.length();
        vector<int> arr;
        int p=0,j=n;
        for(int i =0; i<n ; i++){
            if(s[i]=='I'){
                arr.push_back(p++);
            }else{
                arr.push_back(j--);
            }

        }
        arr.push_back(p);
        return arr;
    }
};