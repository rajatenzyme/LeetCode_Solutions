class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        vector<pair<int, int>> zeros;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j] == 0){
                    zeros.push_back({i,j});
                }
            }
        }
        if(zeros.size() == rows*cols)
            return;
        for(auto it : zeros){
            for(int i=0;i<rows;i++){
                matrix[i][it.second] = 0;   
            }
            for(int i=0;i<cols;i++){
                matrix[it.first][i] = 0;
            }
        }
        
    }
};