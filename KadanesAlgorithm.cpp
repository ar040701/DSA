#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums){
    int maxSum = INT_MIN;
    int sum = 0;
    for(int i=0;i<nums.size();i++){
        sum+= nums[i];
        maxSum = max(maxSum,sum);
        if(sum<0){
            sum = 0;

        }

    }
    return maxSum;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int majority= maxSubArray(arr);
    cout<<majority;

    return 0;
}