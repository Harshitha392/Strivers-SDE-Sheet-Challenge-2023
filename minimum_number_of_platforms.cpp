int calculateMinPatforms(int at[], int dt[], int n) {
    sort(at,at+n);
    sort(dt,dt+n);
    int count =0;
    int max1=0;
    count =0 ;
    int i=0;
    int j=0;
    while(i<n){
        if(at[i]<=dt[j]){
            count++;
            max1=max(max1,count);
            i++;
        }
        else if(at[i]>dt[j]){
            count--;
            j++;
        }
    }
    return max1;
}
