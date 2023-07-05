#include <bits/stdc++.h> 
vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    vector<set<int>>m(vertex);
    for(auto e : edges){
        m[e.first].insert(e.second);
        m[e.second].insert(e.first);
    }
    vector<int>ans;
    vector<bool>vis(vertex,false);
    for(int i = 0; i < vertex; i++){
        if(!vis[i]){
            queue<int>q;
            q.push(i);
            while(!q.empty()){
                int curr = q.front();
                q.pop();
                if(vis[curr]) continue;
                vis[curr] = true;
                ans.push_back(curr);
                for(auto j : m[curr]){
                    if(!vis[j])
                        q.push(j);
                }
            }
        }
    }
    return ans;
}
