#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>& nums){
    int ans=0;
    map<int,int> mp;
    for(auto it:nums){
        mp[it]++;
    }

    for(auto it:mp){
        if(it.second==1){
            ans = it.first;
            break;
        }
    }
    // optimal approach
    ans=0;
    for(int i=0;i<nums.size();i++){
        ans = ans ^ nums[i];
        }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = singleNumber(arr);
    cout<<ans<<endl;

    return 0;
}