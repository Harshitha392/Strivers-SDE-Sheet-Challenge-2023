pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	int x=0;
    for(int i=0;i<n;i++){
        x=x^arr[i];
    }
    for(int i=1;i<=n;i++){
        x=x^(i);
    }
    int a=0;
    vector<int>v(n,0);
    for(int i=0;i<n;i++){
        v[arr[i]-1]=1;
    }
    for(int i=0;i<n;i++){
        v[arr[i]-1]=0-v[arr[i]-1];
    }
    for(int i=0;i<n;i++){
        if(v[i]>0){
            a=i+1;
        }
    }
    pair<int,int>p;
    p.second=a;
    p.first=a^x;
    return p;
}
