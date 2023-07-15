int longestSubSeg(vector<int> &arr , int n, int k){
    int s = 0;
    int e =0;
    int max1=0;
    int count=0;
    while(e<n){
        if(arr[e]==0) count++;
        while(count>k){
            if(arr[s] == 0) count--;
            s++;
        }
        max1 =max(max1,e-s+1);
        e++;
    }
    return max1;
}
