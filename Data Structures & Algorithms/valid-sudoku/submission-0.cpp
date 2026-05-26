class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for (std::size_t i = 0; i < 9; ++i) {
            std::unordered_set<int> row;
            std::unordered_set<int> col;
            for (std::size_t j = 0; j < 9; ++j) {
                auto row_val = board[i][j];
                if (row_val != '.') {
                    if (row.contains(row_val)) return false;
                    row.insert(row_val);
                }
                
                auto col_val = board[j][i];
                if (col_val != '.') {
                    if (col.contains(col_val)) return false;
                    col.insert(col_val);
                }
            }    
        }

        
        for (std::size_t i = 0; i < 9; i += 3) {
            for (std::size_t j = 0; j < 9; j += 3) {
                
                std::unordered_set<int> square;
                for (std::size_t t = 0; t < 3; ++t) {
                    for (std::size_t k = 0; k < 3; ++k) {
                        auto val = board[i + t][j + k];
                        if (val != '.') {
                            if (square.contains(val)) return false;
                            square.insert(val);
                        }
                    }
                }
                
            }
        }

        return true;
        
    }
};
