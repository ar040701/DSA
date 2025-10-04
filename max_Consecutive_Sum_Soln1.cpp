#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveSum(vector<int> &arr, int target){
    int n = arr.size();
    map<int,int> m;
    int sum=0;
    int maxLen=0;
    for(int i=0;i<n;i++){
        sum+= arr[i];
        if(sum==target){
            maxLen = max(maxLen, i+1);
        }
        int remSum= sum - target;
        if(m.find(remSum)!=m.end()){
            int leng = i-m[remSum];
            maxLen = max(maxLen, leng);
        }
        m[sum] = i;
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

    int len = maxConsecutiveSum(arr, target);

    cout<<len;

    return 0;
}