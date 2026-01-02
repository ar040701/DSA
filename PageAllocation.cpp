class Solution {
public:
    int pagesCanWeAllot(vector<int> nums, int pages, int m){
        int sumOfPages = 0;
        int noOfStudents = 1;
        for(int i=0;i< nums.size(); i++){
            if(sumOfPages + nums[i] <= pages){
                sumOfPages + = nums[i];
            } else{
                noOfStudents++;
                sumOfPages = nums[i];
            }
        }
        return noOfStudents;
    }
public:
    int findPages(vector<int> &nums, int m)  {
        int maxi = INT_MIN;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            maxi = max(maxi, nums[i]);
            sum + = nums[i];
        }

        for(int i= maxi ; i<= sum; i++){
            int cntStudent = pagesCanWeAllot(nums, i, m);
            if(cntStudent <= m){
                return i;
                }

            }
        }
    }
};