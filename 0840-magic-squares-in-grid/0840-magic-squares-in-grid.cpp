class Solution {
public:
    bool isMagic(vector<vector<int>>& g, int r, int c) {
        if (g[r+1][c+1] != 5) return false;

        vector<int> seen(10, 0);
        for (int i = r; i < r + 3; i++)
            for (int j = c; j < c + 3; j++) {
                int x = g[i][j];
                if (x < 1 || x > 9 || seen[x]++) return false;
            }

        return
            g[r][c] + g[r][c+1] + g[r][c+2] == 15 &&
            g[r+1][c] + g[r+1][c+1] + g[r+1][c+2] == 15 &&
            g[r+2][c] + g[r+2][c+1] + g[r+2][c+2] == 15 &&
            g[r][c] + g[r+1][c] + g[r+2][c] == 15 &&
            g[r][c+1] + g[r+1][c+1] + g[r+2][c+1] == 15 &&
            g[r][c+2] + g[r+1][c+2] + g[r+2][c+2] == 15 &&
            g[r][c] + g[r+1][c+1] + g[r+2][c+2] == 15 &&
            g[r][c+2] + g[r+1][c+1] + g[r+2][c] == 15;
    }

    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int ans = 0;
        for (int i = 0; i + 2 < grid.size(); i++)
            for (int j = 0; j + 2 < grid[0].size(); j++)
                if (isMagic(grid, i, j))
                    ans++;
        return ans;
    }
};
