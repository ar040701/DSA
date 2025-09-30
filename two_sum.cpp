#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int,int> ump;
    vector<int> ans;
    for(int i=0;i<nums.size();i++){
        int target_num =  target - nums[i];
        if(ump.find(target_num)!=ump.end()){
            ans.push_back(i);
            ans.push_back(ump[target_num]);
            return ans;
        }
        else{
            ump[nums[i]] = i;
        }
    }   
    return ans;  
    }


int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;

    vector<int> ans = twoSum(arr,target);
    int size = ans.size();
    for(int i=0;i<size;i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}