#include <bits/stdc++.h> 
using namespace std;
long long merge(long long *v,long long temp[],long long left,long long mid,long long right){
    long long inversion_count=0;
    long long i=left,j=mid,k=left;
    while((i<=mid-1) && (j<=right)){
        if(v[i]<=v[j])
        {
            temp[k++]=v[i++];
        }
        else{
            temp[k++]=v[j++];
            inversion_count=inversion_count+(mid-i);
        }
    }
    while(i<=mid-1){
        temp[k++]=v[i++];
    }
    while(j<=right){
        temp[k++]=v[j++];
    }
    for(i=left;i<=right;i++){
        v[i]=temp[i];
    }
    return inversion_count;
}
long long mergesort(long long *v,long long temp[],long long left,long long right){
    long long mid,inversion_count=0;
    if(right>left){
        mid=(left+right)/2;
        inversion_count=inversion_count+mergesort(v,temp,left,mid);
        inversion_count=inversion_count+mergesort(v,temp,mid+1,right);
        inversion_count=inversion_count+merge(v,temp,left,mid+1,right);
    }
    return inversion_count;
}
long long getInversions(long long *v, int n){
    long long temp[n];
    long long k=mergesort(v,temp,0,n-1);
    return k;
}
