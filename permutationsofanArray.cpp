#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int n= nums.size();
    int index = -1;
    for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            index = i;
            break;
        }
    }
    if(index==-1){
        reverse(nums.begin(),nums.end());
        return;
    }

    for(int j=n-1;j>index;j--){
        if(nums[j]>nums[index]){
            swap(nums[j],nums[index]);
            break;
        }
    }

    reverse(nums.begin()+index+1,nums.end());
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    nextPermutation(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}