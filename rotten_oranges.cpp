#include <bits/stdc++.h>
using namespace std;
int x4[]= {-1,0,1,0};
queue<pair<int,int>>q;
int y4[]= {0,1,0,-1};
void bfs(int x,int y,vector<vector<int>>&grid,map<pair<int,int>,int>&m1,int n,int m,int &count){
         for(int d=0;d<4;d++)
        {
            int ni=x+x4[d];
            int nj=y+y4[d];
            if(ni>=0 && ni<n && nj<m && nj>=0 && grid[ni][nj]==1)
            {
                q.push({ni,nj});
                m1[{ni,nj}]=m1[{x,y}]+1;
                grid[ni][nj]=2;
                count--;
            }
        }
}
int minTimeToRot(vector<vector<int>>& grid, int n, int m)
{
    //q.clear();
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                        q.push({i,j});
                }
                if(grid[i][j]==1) count++;
        }
    }
    map<pair<int,int>,int>m1;
    while(!q.empty()){
            pair<int,int>p =q.front();
            q.pop();
            bfs(p.first,p.second,grid,m1,n,m,count);
    }
    if(count!=0) return -1;
    int max1=0;
    for(auto i:m1){
            max1 =max(max1,i.second);
    }
    return max1;
}
