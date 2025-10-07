#include<bits/stdc++.h>
using namespace std;

int stockBuySell(vector<int> arr, int n){
    int maxProfit=0;
    int min = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
        maxProfit = max(maxProfit, arr[i]-min);
    }
    return maxProfit;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxProfit= stockBuySell(arr,n);
    cout<<maxProfit;

    return 0;
}