class Solution {
public:
    int f(vector<int>& arr, int left, int right ,vector<vector<int>>& memo) {
        if (left > right)
            return 0;
        if (memo[left][right] != INT_MIN)
            return memo[left][right];
        int choseLeft = arr[left] - f(arr, left + 1, right, memo);
        int choseRight = arr[right] - f(arr, left, right - 1, memo);

        return memo[left][right] = max(choseLeft, choseRight);
    };


    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> memo(n, vector<int>(n, INT_MIN));
        return f(nums, 0, n - 1, memo) >= 0;
    }
};