class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {

        // Kisi bhi index pe agar uske diagonal element , upar aur bagal ka element agar 1 h to wo sab square banayenge har size ke square ke liye ye valid h, therefore hum dp matrix me wahi size dekh ke update karenge agar ek bhi 0 h to wo square possible nhi h (Strength of a group is equal to the weakest in the group)
        int n = matrix.size();
        int m = matrix[0].size();

        vector<vector<int>> dp(n, vector<int>(m, 0));
        int ans = 0;
        for (int i = 0; i < n; i++) {
            dp[i][0] = matrix[i][0] - '0';
            ans = max(ans, dp[i][0]);
        }
        for (int i = 0; i < m; i++) {
            dp[0][i] = matrix[0][i] - '0';
            ans = max(ans, dp[0][i]);
        }
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][j] == '1') {
                    dp[i][j] = 1 + min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});
                    ans = max(ans, dp[i][j]);
                }
            }
        }
        return ans * ans;
    }
};