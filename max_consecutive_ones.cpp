#include<bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums){
    int n = nums.size();
    int count = 0;
    int maxCount = 0;
    int i=0;
    for(int j=0;j<n;j++){
        if(nums[j]==1){
            count++;
            maxCount = max(maxCount,count);
        } else{
            count=0;
        }
    }
    return maxCount;
}


int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = findMaxConsecutiveOnes(arr);
    cout<<ans<<endl;

    return 0;
}