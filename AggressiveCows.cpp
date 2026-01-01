class Solution {
public:
    bool minCowPossible(int distance, vector<int> &nums, int k){
        int cows = 1;
        int last = nums[0];
        for(int i=1; i<nums.size(); i++){
            if(nums[i]- last>=distance){
                cows++;
                last = nums[i];
                if(cows >= k) return true;
            }
        }
        return false;
    }
    
public:
    int aggressiveCows(vector<int> &nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int maxi = INT_MIN:
        for(int i=0;i<n;i++){
            maxi= max(nums[i],maxi);
        }
        for(int i=1; i<=max;i++){
            if(minCowPossible(i,nums,k)){
                continue;
            } else{
                return i-1;
            }
        }
    }
};