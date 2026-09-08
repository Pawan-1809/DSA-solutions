class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_map<int,int> seen;
        for(int i = 0 ; i < order.size() ; i++){
            seen[order[i]] = i;
        }
        sort(friends.begin(), friends.end(), [&](int a, int b){
            return seen[a]<seen[b];
        });
        return friends;
    }
};