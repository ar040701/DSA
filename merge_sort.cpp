

#include <bits/stdc++.h>
using namespace std;

void merge_sort_with_op(int arr[], int n, int low, int mid, int high){
    
    vector<int> v;
    
    int i=low;
    int j=mid+1;
    
    while(i<=mid && j<=high){
        if(arr[i]> arr[j]){
            v.push_back(arr[j]);
            j++;
        } else{
            v.push_back(arr[i]);
            i++;
        }
    }
    
    while(i<= mid){
        v.push_back(arr[i]);
        i++;
    }
    
    while(j<= high){
        v.push_back(arr[j]);
        j++;
    }
    
    for(int i=0 ; i<v.size(); i++){
        arr[low+i]= v[i];              // low+i because everytime we are merging different different arrays
    }
    
}

void merge_sort(int arr[], int n, int low, int high){
   
    
    
    if(low==high) return;
    
    int mid = (low+high)/2;

    merge_sort(arr, n, low, mid);
    merge_sort(arr, n, mid+1, high);
    merge_sort_with_op(arr, n, low, mid, high);
    
    
    
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low=0;
    int high = n-1;
    
    merge_sort(arr,n, low, high);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}