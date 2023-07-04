#include <bits/stdc++.h> 
vector<int> countDistinctElements(vector<int> &arr, int k) 
{
    int n =arr.size();
    vector<int>ans;
    map<int,int>m;
    int i=0;
    int j=0;
    for(int i=0;i<k;i++)
    m[arr[i]]++;
    ans.push_back(m.size());
    for(int j=k;j<n;j++){
        m[arr[j-k]]--;
        if(m[arr[j-k]]==0) m.erase(arr[j-k]);
        m[arr[j]]++;
        ans.push_back(m.size());
    }
    return ans;
}
