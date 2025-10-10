#include<bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int>& nums){
    vector<int> ans;
    int n= nums.size();
    int maxi = -1;
    for(int i=n-1; i>=0; i--){
        bool flag=  false;
        if(nums[i]>maxi){
            maxi = nums[i];
            flag = true;
        }
        if(flag){
            ans.push_back(maxi);
        }
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

    vector<int> ans= leaders(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}