class Solution{
public:
    int subarraySum(vector<int> &nums, int k){
           int i=0;
           int j=0;
           int count=0;
           int sum=0;
           int n = nums.size();
           while(j<n){
            sum+=nums[j];
            while(sum>k && i<=j){
                sum-=nums[i];
                i++;
             }
             if(sum==k){
                count++;
             }
             j++;

    }
    return count;
    }
};