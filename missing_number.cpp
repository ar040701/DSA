#include<bits/stdc++.h>
using namespace std;

 int missingNumber(vector<int>& nums){
    int ans;
    int n = nums.size();
    int total = (n*(n+1))/2;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
    }
    ans = total - sum;
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

    int ans = missingNumber(arr);
    cout<<ans<<endl;

    return 0;
}