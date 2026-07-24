class Solution {
public:
    int countVowelStrings(int n) {
        int five = 1;
        int four = 0;
        int three = 0;
        int two = 0;
        int one = 0;
                
        for(int i = 1;i < n; i++){
            int nfive = five;
            int nfour = five + four;
            int nthree = five + four+ three;
            int ntwo = five + four + three + two;
            int none = five + four + three + two + one;

            five = nfive;
            four = nfour;
            three = nthree;
            two = ntwo;
            one = none;
            
            
        }
        long long ans = one + 2*two + 3*three + 4*four + 5*five;
        return ans;
    }
};