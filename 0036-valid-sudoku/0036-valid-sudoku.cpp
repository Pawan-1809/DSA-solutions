class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // Check rows
        for (int i = 0; i < 9; i++) {
            vector<int> freq(9, 0);
            for (int j = 0; j < 9; j++) {
                if (board[i][j] != '.') {
                    int idx = board[i][j] - '1';
                    freq[idx]++;
                    if (freq[idx] > 1) return false;
                }
            }
        }

        // Check columns
        for (int j = 0; j < 9; j++) {
            vector<int> freq(9, 0);
            for (int i = 0; i < 9; i++) {
                if (board[i][j] != '.') {
                    int idx = board[i][j] - '1';
                    freq[idx]++;
                    if (freq[idx] > 1) return false;
                }
            }
        }

        // Check 3x3 boxes
        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {
                vector<int> freq(9, 0);
                for (int k = i; k < i + 3; k++) {
                    for (int l = j; l < j + 3; l++) {
                        if (board[k][l] != '.') {
                            int idx = board[k][l] - '1';
                            freq[idx]++;
                            if (freq[idx] > 1) return false;
                        }
                    }
                }
            }
        }

        return true;
    }
};