vector<vector<long long int>>ans;
        for(long long i=0;i<n;i++){
            vector<long long>v;
            for(int j=0;j<=i;j++){
                v.push_back(0);
            }
            ans.push_back(v);
        }
        ans[0][0]=1;
        for(long long i=0;i<n;i++){
        ans[i][i]=1;
        ans[i][0]=1;
        }
        vector<vector<long long int>>v;
        for(long long i=1;i<n;i++){
            for(int j=1;j<i;j++){
                ans[i][j]=ans[i-1][j]+ans[i-1][j-1];
            }
        }
        return ans;
