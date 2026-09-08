class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int, int> freq;
        while(n>0){
            int digit = n%10;
            freq[digit]++;
            n /= 10;
        }
        int ans = 0;
        for(auto& it : freq){
            ans+= it.first * it.second;
        }
        return ans;
    }
};