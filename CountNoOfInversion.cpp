#include<bits/stdc++.h>
using namespace std;

int merge(int arr[], int low, int mid, int high){
    int i = low;
    int j = mid+1;
    int cnt =0;
    vector<int> temp;
    while(i<=mid && j<=high){
        if(arr[i]>arr[j]){
            temp.push_back(arr[j]);
            cnt += (mid - i + 1);
            j++;
        } else{
            temp.push_back(arr[i]);
            i++;
        }
    }

        while(i<=mid){
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=high){
            temp.push_back(arr[j]);
            j++;
        }

        for(int v = 0; v<temp.size(); v++){
            arr[low+v] = temp[v];
        }
        return cnt;

}

int mergeSort(int arr[], int low, int high){
    int cnt =0;
    if(low == high){
        return cnt;
    }
    int mid = low + (high-low)/2;
    cnt+= mergeSort(arr, low, mid);
    cnt+= mergeSort(arr, mid+1, high);
    cnt+= merge(arr, low , mid, high);
    return cnt;
}

int NumverOfInversions(int arr[], int n){
    int low = 0;
    int high = n-1;
    return mergeSort(arr, low, high);
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
    
    cout<<NumverOfInversions(arr,n)<<endl;
    
    

    return 0;
}