class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        // 0000 1111 0101 1010 1001 0110 1111111010 00000000101
        int sz = s.size();
        int ones = 0;
        vector<int> grp;
        
        int i = 0;
        while(i < sz){
            if(s[i]=='1'){
                ones++;
                i++;
            }else{
                int zeroes = 0;
                while(i<sz && s[i]=='0'){
                    zeroes++;
                    i++;
                }
                grp.push_back(zeroes);
            }
        }
        int maxSum = ones;
        for (int i = 0; i +1 < grp.size(); i++) {
            maxSum = max(maxSum, ones + grp[i] + grp[i+1]);
        }
        return maxSum;
    }
};