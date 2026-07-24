class Solution {
public:
    int countVowelStrings(int n) { 
        //kyunki lexicographical order maintain karna hai, isliye a ke baad sab vowels aa sakte hain, e ke baad sirf e,i,o,u, i ke baad i,o,u, o ke baad o,u, aur u ke baad sirf u, isliye har iteration me a=a+e+i+o+u, e=e+i+o+u, i=i+o+u, o=o+u, u=u update karte hain aur end me a+e+i+o+u hi total valid sorted vowel strings ka answer hota hai.
        int a = 1, e = 1, i = 1, o = 1, u = 1; 

        for(int j = 1; j < n ; j++){
            a = a + e + i + o + u;
            e = e + i + o + u;
            i = i + o + u;
            o = o + u;
            u = u;
        }
        return a+e+i+o+u;
    }
};