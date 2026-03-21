class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        int n = r*c;
        long long Sum = (n*(n+1)/2);
        long long SqSum = (long long)n*(n+1)*(2*n+1)/6;
        long long rSum = 0;
        long long rSqSum = 0;

        for(int i = 0; i < r; i++){
            for(int j = 0; j< c; j++){
                rSum += grid[i][j];
                rSqSum += (long long) grid[i][j]*grid[i][j];
            }
        }
        long long val1 = rSum - Sum;
        long long val2 = rSqSum - SqSum;
        long long val3 = val2/val1;
        int x = (val1+val3)/2;
        int y = (val3-val1)/2;
        return {x,y};
    }
};