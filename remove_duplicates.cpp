#include<bits/stdc++.h>
using namespace std;

int remove_duplicate(vector<int> &arr,int n){
    if(n==0 || n==1){
        return n;
    }

    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}


int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int size= remove_duplicate(arr,n);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}