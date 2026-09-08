class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<int> ans;
        for(int i = 0; i< n ; i++){
            int here = 0;
            for(int j = 0; j< n ; j++){
                if(matrix[i][j] != 0) here++;
            }
            ans.push_back(here);
        }
        return ans;
    }
};