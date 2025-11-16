class Solution {
int reversePair(vector<int> &arr,int low, int mid , int high){
    int count = 0;
    int j = mid+1;
    for(int i = low; i<=mid;i++){
        while(j<=high && (long long)arr[i]>2LL*arr[j]){
            j++;
        }
        count += j - (mid+1);
    }
    return count;

}

void merge(vector<int> &arr, int low , int mid, int high){
    int i = low;
    int j = mid+1;
    vector<int> temp;
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
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

    for(int k =0; k<temp.size();k++){
        arr[k+low] = temp[k];
    }

}

int mergeSort(vector<int> &arr, int low, int high){
    if(low >=high){
        return 0;
    }
    int mid = low+(high-low)/2;
    int count = 0;
    count+=mergeSort(arr, low , mid);
    count+=mergeSort(arr, mid+1, high);
    count+=reversePair(arr, low, mid, high);
    merge(arr, low, mid, high);

    return count;
}

public:
    int reversePairs(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        return mergeSort(nums,low, high);
    }
};class Solution {
int reversePair(vector<int> &arr,int low, int mid , int high){
    int count = 0;
    int j = mid+1;
    for(int i = low; i<=mid;i++){
        while(j<=high && (long long)arr[i]>2LL*arr[j]){
            j++;
        }
        count += j - (mid+1);
    }
    return count;

}

void merge(vector<int> &arr, int low , int mid, int high){
    int i = low;
    int j = mid+1;
    vector<int> temp;
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
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

    for(int k =0; k<temp.size();k++){
        arr[k+low] = temp[k];
    }

}

int mergeSort(vector<int> &arr, int low, int high){
    if(low >=high){
        return 0;
    }
    int mid = low+(high-low)/2;
    int count = 0;
    count+=mergeSort(arr, low , mid);
    count+=mergeSort(arr, mid+1, high);
    count+=reversePair(arr, low, mid, high);
    merge(arr, low, mid, high);

    return count;
}

public:
    int reversePairs(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        return mergeSort(nums,low, high);
    }
};