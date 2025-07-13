//picks a pivot element and place it in correct place where elements lesser than it should be in left side and larger on right side
//swap it when j is lower than i and takes that index and replace it with the pivot element
#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i= low;
    int j= high;
    
    while(i<j){
        while(pivot>=arr[i] && i<=high-1){
            i++;
        }
        while(pivot<=arr[j] && j>=low+1){
            j--;
        }
        
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    
     swap(arr[low],arr[j]);
     return j;
}

void quick_sort(int arr[] , int low, int high){
    
    if(low<high){
        int p_index = partition(arr, low, high);
        quick_sort(arr, low, p_index);
        quick_sort(arr, p_index+1,high);
    }
}

int main()
{
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int low=0;
    int high = n-1;
    
    quick_sort(arr, low, high);
    
    for(int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}