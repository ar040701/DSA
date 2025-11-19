class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = 0;
        int suffix = 1;
        int prefix = 1;
        int n = nums.size();
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]==0 || nums[n-i-1]==0){
                suffix = 1;
                prefix = 1;
            }
            suffix *= nums[i];
            prefix *= nums[n-i-1];
            maxi = max(maxi, max(suffix, prefix));
        }
        return maxi;
    }
};