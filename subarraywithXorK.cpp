class Solution{
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
        int cnt = 0;
        int xr = 0;
        unordered_map<int,int> mp;
        mp[0] = 1;
        for(int i=0;i<nums.size();i++){
            xr = xr ^ nums[i];
            int xrLeft = xr ^ k;
            cnt += mp[xrLeft];
            mp[xr]++; 
        }
        return cnt;
    }
};