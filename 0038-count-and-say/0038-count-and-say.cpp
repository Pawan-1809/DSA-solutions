class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) {
            return "1";
        }

        string s = countAndSay(n - 1);
        string ans = "";
        int curr = 0;
        for (int i = 0; i < s.size(); i++) {
            if (i == 0 || s[i] == s[i - 1]) {
                curr++;
            } else {
                ans.push_back('0' + curr);
                ans.push_back(s[i - 1]);
                curr = 1;
            }
        }

        ans.push_back('0' + curr);
        ans.push_back(s[s.size() - 1]);

        return ans;
    }
};