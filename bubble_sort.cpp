#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
    // 7,5,8,2,9      
    // step 1:  5 , 7 , 2 ,8 , 9
    // step 2:  5 , 2 , 7 ,8 , 9
    // step 3:  2 , 5 , 7 ,8 , 9
    for(int i=n-1 ; i>=0 ;i--){ 
     for(int j=0; j<=i-1 ; j++){    // j will go from 0 to i-1 so last element is already sorted
         if(arr[j] > arr[j+1]){
            int temp = arr[j] ;
            arr[j] = arr[j+1];
            arr[j+1] = temp;
         }
     }    
    }


}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    
    bubble_sort(arr, n);
    for (int k=0; k<n; k++){
        cout<< arr[k] << " ";
    }

    return 0;
}