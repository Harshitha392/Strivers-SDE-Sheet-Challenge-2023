void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
     int l,r,t,b,k,temp;
     l=0;t=0;r=m-1;b=n-1;
     while(t<b&&l<r)
     {
         temp=mat[t][l];
         for(int i=l+1;i<=r;i++)
         {
             k= mat[t][i];
             mat[t][i]=temp;
             temp=k;
         }
         t++;
         for(int i=t;i<=b;i++)
         {
                k=mat[i][r];
                mat[i][r]=temp;
                temp=k;
         }
         r--;
         for(int i=r;i>=l;i--)
         {
             k=mat[b][i];
             mat[b][i]=temp;
             temp=k;
         }
         b--;
         for(int i=b;i>=t;i--)
         {
             k=mat[i][l];
             mat[i][l]=temp;
             temp=k;
         }
         l++;
         mat[t-1][l-1]=temp;

     }
}
