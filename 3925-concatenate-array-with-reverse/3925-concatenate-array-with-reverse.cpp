class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> ans = nums;

        ans.insert(ans.end(), nums.rbegin(), nums.rend());

        return ans;
    }
};