class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int i = s.size() - 1;
        while (i >= 0) {
            while (i >= 0 && s[i] == ' ') i--;
            if (i < 0) break;

            int end = i;

            while (i >= 0 && s[i] != ' ') i--;
            if (!ans.empty()) ans += ' ';

            for (int j = i + 1; j <= end; j++) {
                ans += s[j];
            }
        }

        return ans;
    }
};