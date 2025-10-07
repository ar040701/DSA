#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& arr){
    unordered_map<int,int> um;
    int element = -1;
    for(int i=0;i<arr.size();i++){
        um[arr[i]]++;
    }
    for(auto it:um){
        if(it.second>(arr.size()/2)){
            element = it.first;
        }
    }
    return element;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int majority= majorityElement(arr);
    cout<<majority;

    return 0;
}