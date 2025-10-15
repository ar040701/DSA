class Solution {
public:
    void rotateMatrix(vector<vector<int>>& matrix) {
        int m = matrix.size();
        for(int i=0;i<m-1;i++){
            for(int j=i+1;j<matrix[i].size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<m;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};