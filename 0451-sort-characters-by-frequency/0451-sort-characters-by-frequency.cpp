class Solution {
    static bool custom(pair<char, int>& p1, pair<char, int>& p2){
        return p1.second > p2.second;
    }

public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for(char c : s) {
            mp[c]++;
        }
        vector<pair<char, int>> count(mp.begin(), mp.end());
        sort(count.begin(), count.end(), custom);

        string ans = "";
        for(auto c : count) {
            ans.append(c.second, c.first);
        }
        return ans;
    }
};