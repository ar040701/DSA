class Solution {
public:

    vector<int> printRows(int rowNumber){
        vector<int> eachRowValue;
        eachRowValue.push_back(1);
        int ans=1;
        int n = rowNumber;
        for(int i=1 ; i<rowNumber;i++)
        {
            ans = ans*(n-i);                  // 1* (6-1) /1 , 5*(6-2)/2
            ans = ans / i;
            eachRowValue.push_back(ans);
        }
        return eachRowValue;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> numPascalTriangle;
        for(int i=1;i<=numRows; i++){
            numPascalTriangle.push_back(printRows(i));
        }
        return numPascalTriangle;
    }
};