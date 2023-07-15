#include <bits/stdc++.h> 
void find(int i,int n,vector<int>&arr,vector<vector<int>>&ans,vector<int>&v){
    ans.push_back(v);
    for(int j=i;j<n;j++){
        if(j!=i && arr[j]==arr[j-1]) continue;
        v.push_back(arr[j]);
        find(j+1,n,arr,ans,v);
        v.pop_back();
    }
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    vector<vector<int>>ans;
    vector<int>v;
    sort(arr.begin(),arr.end());
    find(0,n,arr,ans,v);
    return ans;
}
