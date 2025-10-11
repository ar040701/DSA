#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums){
    int leng=1;
    int n= nums.size()-1;
    unordered_set<int> us;
    for(int i=0;i<nums.size();i++){
        us.insert(nums[i]);
    }
    for(auto it:us){
        if(us.find(it-1)==us.end()){
            int beginner = it;
            int count=0;
            while(us.find(beginner)!=us.end()){
                count+=1;
                beginner+=1;
        }
        leng = max(leng,count);
        }
    }
    return leng;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int len= longestConsecutive(arr);
    cout<<len;

    return 0;
}