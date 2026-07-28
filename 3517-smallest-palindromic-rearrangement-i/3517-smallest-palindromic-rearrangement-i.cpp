class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        int arr[26] = {0};

        for(int i = 0; i< n/2 ; i++){
            arr[s[i]-'a']++;
        }
        int start = 0;
        int end = n-1;

        for(int i = 0; i< 26; i++){
            while (arr[i] > 0) {
                char c = i + 'a';
                s[start++] = c;
                s[end--] = c;
                arr[i]--;
            }
        }
        return s;
    }
};