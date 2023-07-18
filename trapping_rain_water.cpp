long long getTrappedWater(long long* arr, int n) {
    vector<long long>ngeLeft(n,-1);
    long long int mx=0;
    vector<long long>ngeRight(n,-1);
    for(int i=0;i<n;i++){
        if(arr[i]>mx) mx = arr[i];
        ngeLeft[i] = mx;
    }
    mx =0;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>mx) mx = arr[i];
        ngeRight[i]= mx;
    }
    long long int count=0;
    for(int i=0;i<n;i++){
        long long x = min(ngeLeft[i],ngeRight[i]);
        long long y = x-arr[i]<0?0:x-arr[i];
        count=count+y;
    }
    return count;
}
