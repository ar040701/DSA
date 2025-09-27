#include<bits/stdc++.h>
using namespace std;

vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2){
    vector<int> ans;
    int i=0;
    int j=0;
    int n1= nums1.size();
    int n2= nums2.size();
    while(i<n1 && j<n2){
        if(nums1[i]<nums2[j]){
            i++;
        }
        else if(nums1[i]>nums2[j]){
            j++;
        }
        else{
            ans.push_back(nums1[i]);
            i++;
            j++;
        }
    }
    return ans;
}
vector<int> unionArray(vector<int>& nums1, vector<int>& nums2){
    vector<int> ans;
    int i=0;
    int j=0;
    int n1= nums1.size();
    int n2= nums2.size();
    while(i<n1 && j<n2){
        if(nums1[i]<nums2[j]){
            if(ans.size()==0 || ans.back()!=nums1[i]){
                ans.push_back(nums1[i]);
            }
            i++;
        }
        else if(nums1[i]>nums2[j]){
            if(ans.size()==0 || ans.back()!=nums2[j]){
                ans.push_back(nums2[j]);
            }
            j++;
        }

    }
    while(i<n1){
        if(ans.size()==0 || ans.back()!=nums1[i]){
            ans.push_back(nums1[i]);
        }
        i++;
    }
    while(j<n2){
        if(ans.size()==0 || ans.back()!=nums2[j]){
            ans.push_back(nums2[j]);
        }
        j++;
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

    string line;
    vector<int> nums1, nums2;

    getline(cin, line); // read the full line
    stringstream ss1(line); //seperate the integer from the line
    int num;
    while (ss1 >> num) {
        nums1.push_back(num);
    }

    getline(cin, line); // read the full line
    stringstream ss2(line);
    while (ss2 >> num) {
        nums2.push_back(num);
    }
    // vector<int> ans = intersectionArray(nums1,nums2);
    // vector<int> ans = unionArray(nums1,nums2);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}