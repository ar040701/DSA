#include<bits/stdc++.h>
using namespace std;


void rotate_array_left(vector<int> &arr,int k){
    int n = arr.size();
    vector<int> temp(n);   
    for(int i= 0;i<n;i++){
        temp[i] = arr[(i+k)%n];
    }
    arr=temp;
}

void rotate_array_right(vector<int> &arr,int k){
    int n = arr.size();
    vector<int> temp(n);   
    for(int i= 0;i<n;i++){
        temp[(i+k)%n] = arr[i];
    }
    arr=temp;
}

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // int size= remove_duplicate(arr,n);
    rotate_array_right(arr,k);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}