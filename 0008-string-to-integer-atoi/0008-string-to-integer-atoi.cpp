class Solution {
    int helper(string &s, int i, int end, long long sum, int sign) {

        if (i >= end || !isdigit(s[i])) {
            return sign * sum;
        }

        sum = sum * 10 + (s[i] - '0');

        if (sign == 1 && sum > INT_MAX)
            return INT_MAX;

        if (sign == -1 && -sum < INT_MIN)
            return INT_MIN;

        return helper(s, i + 1, end, sum, sign);
    }

public:
    int myAtoi(string s) {

        int i = 0, n = s.size();

        while (i < n && s[i] == ' ')
            i++;

        int sign = 1;

        if (i < n && (s[i] == '+' || s[i] == '-')) {
            if (s[i] == '-')
                sign = -1;
            i++;
        }

        return helper(s, i, n, 0, sign);
    }
};