class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> output;
        int rows=matrix.size();
        int cols=matrix[0].size();
        output.resize(cols);
        for(int i=0;i<cols;i++){
            output[i].resize(rows);
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                output[i][j]=matrix[rows-1-j][i];
            }
        }
        matrix=output;
    }
};