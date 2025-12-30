class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;

    void backtrack(map<int,int>& freq, int n) {
        if (temp.size() == n) {
            ans.push_back(temp);
            return;
        }

        for (auto& [num, cnt] : freq) {
            if (cnt == 0) continue;

            freq[num]--;
            temp.push_back(num);

            backtrack(freq, n);

            temp.pop_back();
            freq[num]++;
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        map<int,int> freq;
        for (int x : nums) freq[x]++;

        backtrack(freq, nums.size());
        return ans;
    }
};
