class Solution {
public:
    string reverseWords(string s) {
        int first = 0;
        int last = s.length()-1;
        int start = first;
        for(int i = 0; i<= last; i++){
            if(s[i] == ' '){
                int end = i-1;
                while(start<end)
                    swap(s[start++], s[end--]);
                start = i+1;
            }
            else if (i == last ){
                int end = i;
                while(start<end)
                    swap(s[start++], s[end--]);
                start = i+1;
            }
        }return s;  
    }
};