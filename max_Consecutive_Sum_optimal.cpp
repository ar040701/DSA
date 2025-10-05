#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveSumOptimal(vector<int> &arr,int target){
    int i=0;
    int j=0;
    int n = arr.size();
    int maxLen = 0;
    int sum=arr[i];
    while(j<n){
        while(i<=j && sum>target){
            sum-=arr[i];
            i++;
        }
        if(sum == target){
            maxLen = max(maxLen, j-i+1);
        }
        j++;
        if(j<n){
            sum+= arr[j];
        }
    }
    return maxLen;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;

    int len = maxConsecutiveSumOptimal(arr, target);

    cout<<len;

    return 0;
}