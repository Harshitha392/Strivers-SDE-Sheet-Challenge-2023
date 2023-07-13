#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int k)
{
    int n = arr.size();
    map<int,int>m;
    int x =0;
    m[x]++;
    int count =0;
    for(int i=0;i<n;i++){
        x = x^arr[i];
        int ans = (x^k);
        count = count+m[ans];
        m[x]++;
    }
    return count;
}
