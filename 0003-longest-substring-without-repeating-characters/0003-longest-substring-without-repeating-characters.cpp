class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastSeen(256,-1);
        int maxLen = 0;
        int left = 0;
        for(int i = 0; i<s.size() ; i++){
            char c = s[i];
            if(lastSeen[c] >= left){
                left = lastSeen[c]+1;
            }
            lastSeen[c]= i;
            maxLen = max(maxLen, i - left +1);
        }
        return maxLen;
    }
};