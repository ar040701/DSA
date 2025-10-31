#include<bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> hs;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(i!=0 && arr[i]==arr[i-1]) continue;
            int j = i+1;
            int k = n-1;
            while(j<k){
              int sum = nums[i] + nums[j] + nums[k];
                if(sum>0){
                    k--;
                } else if(sum<0){
                    j++;
                } else{
                    vector<int> temp = {nums[i], nums[j] , nums[k]};
                    hs.insert(temp);
                    j++;
                    k--;
                    while(j<k && nums[j]==nums[j+1]) j++;
                    while(j<k && nums[k]==nums[k-1]) k--; 
                }
             }
        }
        vector<vector<int>> result(hs.begin(),hs.end());
        return result;
    }
};