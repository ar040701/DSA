class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m= matrix.size();
        int n= matrix[0].size();
        vector<vector<int>> transposeVector(n, vector<int>(m));
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                transposeVector[j][i] = matrix[i][j];
        }
        }
        return transposeVector;
    }
};