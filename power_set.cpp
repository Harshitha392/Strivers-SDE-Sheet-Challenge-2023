#include <bits/stdc++.h> 
vector<vector<int>> pwset(vector<int>arr)
{
    int n = arr.size();
    int tot=(1LL<<n);
    sort(arr.begin(),arr.end());
    vector<string>v;
    vector<vector<int>>v1;
    for(int i=1;i<tot;i++){
        int k=floor(log2(i))+1;
        vector<int>in;
        for(int j=0;j<k;j++){
            if(i&(1LL<<j)){
                in.push_back(arr[j]);
            }
        }
        v1.push_back(in);
    }
    return v1;
}
