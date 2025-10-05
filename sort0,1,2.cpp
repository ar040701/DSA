#include<bits/stdc++.h>
using namespace std;

void sortZeroOneTwo(vector<int>& nums){
    int low=0;
    int mid=0;
    int len = nums.size();
    int high=len-1;
    while(mid<len && mid<=high){
        if(nums[mid]==0){
            swap(nums[mid++],nums[low++]);

        } else if(nums[mid]==1){
            mid++;
        } else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    sortZeroOneTwo(arr);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}