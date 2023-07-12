#include <bits/stdc++.h>
int maximumActivities(vector<int> &start, vector<int> &finish) {
    vector<pair<int,int>>v;
    for(int i=0;i<start.size();i++)
    {
        v.push_back({finish[i],start[i]});
    }
    int n = v.size();
    sort(v.begin(),v.end());
    int prev = v[0].first;
    int count  =1 ;
    for(int i=1;i<n;i++){
        int x = v[i].second;
        int y = v[i].first;
        if(x>=prev) {
            count++;
            prev = y;
        }
    }
    return count;
}
