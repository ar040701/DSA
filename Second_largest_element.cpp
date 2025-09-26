#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max_elements= INT_MIN;
    int second_max_elements = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max_elements){
            second_max_elements = max_elements;
            max_elements = arr[i];
        }else if(arr[i]>second_max_elements && arr[i]!=max_elements){
            second_max_elements = arr[i];
        }
       
    }

    cout<<second_max_elements<<endl;
    return 0;
}