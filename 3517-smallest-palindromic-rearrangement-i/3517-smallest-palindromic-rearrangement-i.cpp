class Solution {
public:
    string smallestPalindrome(string s) {
        if(s.length()==1){
            return s;
        }
        map<char,int> freq;
        for(auto a:s){
            freq[a]++;
        }
        string ans = "";
        char mid;
        for(auto c:freq){
            int count = c.second;
            if(count%2 == 1){
                mid = c.first;
            }
            count/=2;
            ans+=string(count,c.first);
        }
        string mirror = ans;
        reverse(mirror.begin(),mirror.end());
        if(s.length()%2 != 0){
            ans+=mid;
        }
        ans+=mirror;

        return ans;
    }
};