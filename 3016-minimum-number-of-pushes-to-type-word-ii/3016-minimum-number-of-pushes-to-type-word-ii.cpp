class Solution {
public:
    int minimumPushes(string word) {
        int n = word.length();
        unordered_map<char,int> freq;
        for(auto c:word){
            freq[c]++;
        }
        sort(word.begin(),word.end(), [&](char a, char b){
            if( freq[a]!=freq[b]) return freq[a]>freq[b];
            else return a<b;
        });
        
        int ans = 1;
        int unique = 1;
        char curr = word[0];
        for(int i = 1; i< n; i++){
            if(word[i]==curr){
                if(unique<=8) ans++;
                else if(unique<=16) ans+=2;
                else if(unique<=24) ans+=3;
                else ans+=4;
            }else{
                unique++;
                curr = word[i];
                if(unique<=8) ans++;
                else if(unique<=16) ans+=2;
                else if(unique<=24) ans+=3;
                else ans+=4;
            }
        }
        cout<<word;
        return ans;
    }
};