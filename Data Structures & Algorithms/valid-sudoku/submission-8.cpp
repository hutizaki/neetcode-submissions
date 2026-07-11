#include <bitset>
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bitset<10> rows[9];
        bitset<10> cols[9];
        bitset<10> grids[9]; // use (row / 3) * 3 + (col / 3)
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;
                int g = (i / 3) * 3 + (j / 3);
                int cell = board[i][j] - '0';
                if (
                    rows[i].test(cell) ||
                    cols[j].test(cell) ||
                    grids[g].test(cell)
                ) return false;
                
                rows[i].set(cell);
                cols[j].set(cell);
                grids[g].set(cell);
            }
        }
        return true;
    }
};
