#include<bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums){
    int oddPointer=1;
    int n = nums.size();
    int evenPointer=0;
    vector<int> nArray(n,0);
    for(int i=0;i<n;i++){
        if(nums[i]>=0){
            nArray[evenPointer]=nums[i];
            evenPointer+=2;
        } else{
            nArray[oddPointer]=nums[i];
            oddPointer+=2;
        }
    }
    return nArray;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> newArray= rearrangeArray(arr);
    for(int i=0;i<n;i++){
        cout<<newArray[i]<<" ";
    }

    return 0;
}