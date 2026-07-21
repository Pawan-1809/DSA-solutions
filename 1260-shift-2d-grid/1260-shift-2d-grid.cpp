class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int row = grid.size();
        int col = grid[0].size();
        vector<vector<int>> ans(row, vector<int>(col));
        k %= (row * col);
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                int idx = i * col + j;
                int newidx = (idx + k) % (row * col);
                ans[newidx / col][newidx % col] = grid[i][j];
            }
        }
        return ans;
    }
};