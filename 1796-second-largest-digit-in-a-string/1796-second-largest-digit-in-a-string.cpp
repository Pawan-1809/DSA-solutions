class Solution {
public:
    int secondHighest(string s) {
        int a = -1, b = -1;
        int n = s.length();
        for(int i =0 ; i< n ; i++){
            if(isdigit(s[i])){
                int num = s[i]-'0';
                if(num>a){
                    b = a;
                    a = num;
                }
                else if(num>b && num<a)
                    b = num;
            }
        }
        return b;
    }
};