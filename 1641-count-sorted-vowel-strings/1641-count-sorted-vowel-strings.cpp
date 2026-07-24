class Solution {
public:
    int countVowelStrings(int n) {
        //Sorted order ki wajah se har vowel sirf apne ya uske baad wale vowels se hi continue ho sakta hai. Isliye reverse cumulative DP lagti hai: u=u, o=o+u, i=i+o+u, e=e+i+o+u, a=a+e+i+o+u; har iteration me ye counts update karte hain aur end me sab states ka sum answer hota hai
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