class Solution {
    long long MOD = 1e9 + 7;
    long long power(long long base, long long exp){
        long long ans = 1;
        while(exp>0){
            if (exp % 2)
                ans = (ans * base) % MOD;
            base = (base * base) % MOD;
            exp /= 2;
        }
        return ans;
    }
public:
    int countGoodNumbers(long long n) {
        
        long long evenCnt = (n + 1) / 2;
        long long oddCnt = n / 2;

        return (power(5, evenCnt) * power(4, oddCnt)) % MOD;
    }
};