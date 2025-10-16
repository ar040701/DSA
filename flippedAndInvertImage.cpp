class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> flippedImageVector;
        int m = image.size();
        for(int i=0;i<m;i++){
            reverse(image[i].begin(),image[i].end());
            flippedImageVector.push_back(image[i]);

        }
        for(int i=0;i<flippedImageVector.size();i++){
            for(int j=0;j<flippedImageVector[i].size();j++){
                if(flippedImageVector[i][j]==0){
                    flippedImageVector[i][j] = 1;
                } else{
                     flippedImageVector[i][j] = 0;
                }
            }
        }
        return flippedImageVector;
    }
};