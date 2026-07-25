class Solution {
public:
    int maxProduct(int n) {
        int first = -1;
        int second = -1;
        while(n>0){
            int digit = n%10;
            n/=10;
            if(digit>=second && digit<=first){
                second = digit;
            }else if(digit > first){
                second = first;
                first = digit;
            }
        }
        return first*second;


    }
};