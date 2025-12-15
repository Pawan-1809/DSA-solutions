class Solution {
private:
    string final(string s){
        string temp;
        for(char i:s){
            if(i == '#'){
                if(!temp.empty()) temp.pop_back();
            } else{
                temp.push_back(i);
            }
        }
        return temp;
    }
public:
    bool backspaceCompare(string s, string t) {
        return final(s)==final(t);
    }
};