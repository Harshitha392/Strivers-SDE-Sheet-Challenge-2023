#include <bits/stdc++.h>
using namespace std;
int x4[] = {-1,0,1,0};
int y4[]= {0,1,0,-1};
int n,m;
queue<pair<int,int>>q;
vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
{
    n = image.size();
    m = image[0].size();
    vector<vector<int>>vis(n,vector<int>(m,-1));
    q.push({x,y});
    vis[x][y] = 0;
    vector<vector<int>>ans = image;
    int oldColor = image[x][y];
    if(oldColor == newColor) return image;
    while(!q.empty()){
        pair<int,int>p = q.front();
        q.pop();
        vis[p.first][p.second]=0;
        ans[p.first][p.second] = newColor;
        for(int i=0;i<4;i++){
            int nrow=p.first+x4[i];
            int ncol=p.second+y4[i];
            if(nrow>=0&&nrow<n&&ncol>=0 && ncol<m && vis[nrow][ncol]==-1 && image[nrow][ncol]==oldColor){
                    q.push({nrow,ncol});
                    vis[nrow][ncol]=0;

            }
        }
    }
    return ans;
}
