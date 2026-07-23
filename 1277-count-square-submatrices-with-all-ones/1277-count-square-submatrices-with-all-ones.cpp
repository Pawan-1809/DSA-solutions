class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        //Question 221 ke similar h usme maximum size nikalna tha isme count to maximum calculate karne ke jagah hum just add karte jayenge jab jab square milega
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>>dp(n, vector<int>(m,0));
        int ans = 0;
        
        for(int i = 0; i< n; i++){
            dp[i][0] = matrix[i][0];
            ans+=dp[i][0];
        }
        for(int i = 0; i< m; i++){
            dp[0][i] = matrix[0][i];
            ans+=dp[0][i];
        }
        ans -= dp[0][0];
        for(int i = 1; i< n ; i++){
            for(int j = 1; j< m ; j++){
                if(matrix[i][j]==1){
                    dp[i][j]= 1+ min({dp[i-1][j], dp[i][j-1],dp[i-1][j-1]});
                }
                ans+=dp[i][j];
            }
        }
        return ans;
    }
};