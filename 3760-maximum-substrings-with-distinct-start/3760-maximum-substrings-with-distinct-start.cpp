class Solution {
public:
    int maxDistinct(string s) {
        unordered_map<char, int> seen;
        int ans = 0;
        for(int i = 0 ; i< s.length(); i++){
            seen[s[i]]++;
        }
        return seen.size();
    }
};