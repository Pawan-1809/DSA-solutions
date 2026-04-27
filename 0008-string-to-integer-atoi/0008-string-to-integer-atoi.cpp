class Solution {
    int helper(string& s, int i, long long sum, int sign){
        if(i>=s.size() || !isdigit(s[i])){
            return (int)(sign*sum);
        }
        sum=sum*10 +(s[i]-'0');

        if(sum*sign>=INT_MAX) return INT_MAX;
        if(sum*sign<=INT_MIN) return INT_MIN;

        return helper(s,i+1,sum,sign);
    }
public:
    int myAtoi(string s) {
        int i = 0, end = s.length();
        while (i < s.size() && s[i] == ' ') i++;

        int sign=1;
        if(i < end && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        return helper(s,i,0,sign);
    }
};