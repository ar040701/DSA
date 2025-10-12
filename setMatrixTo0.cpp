
 void setZeroes(vector<vector<int>>& matrix) {
    int col0 = 1;
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            if(matrix[i][j]==0){
                matrix[i][0] = 0;
                if(j!=0)
                    matrix[0][j] = 0;  // For 1st column j we are marking for col0 variable and rest for row 0
                else{
                    col0 = 0;
                } 
            }
        }
    }

    // After marking, iterate the matrix to make it 0
    for(int i=1;i<matrix.size();i++){
        for(int j=1;j<matrix[i].size();j++){
            if(matrix[i][j]!=0){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j] = 0;
                }
            }
        }
    }

    //After middle element is done now go for 1st row and then for 1st column 
    //for 1st row, check for 1st value and for 1st column check for col0 value
    if(matrix[0][0]==0){
        for(int j=1;j<matrix.size();j++){
            matrix[0][j] = 0;
        }
    }
    if(col0==0){
          for(int i=0;i<matrix.size();i++){
            matrix[i][0] = 0;
        }
    }
    
}