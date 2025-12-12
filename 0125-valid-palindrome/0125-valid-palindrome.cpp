class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        for (char c : s)
            if (isalnum((unsigned char)c))
                t += tolower((unsigned char)c);

        string r = t;
        reverse(r.begin(), r.end());
        return t == r;
    }
};
