#include <bits/stdc++.h> 
int merge(vector<int>& arr,int low,int mid,int high){
	int count=0,cnt=0,temp[high-low+1];
	int i=low,j=mid+1;
	for(int i=low;i<=mid;i++){
		while(j<=high && arr[i]>(2LL * (arr[j]))){
			j++;
		}
		count=count+j-mid-1;
	}
	i=low,j=mid+1;
	while(i<=mid && j<=high){
		if(arr[i]<arr[j]) temp[cnt++]=arr[i++];
		else temp[cnt++]=arr[j++];
	}
	
	while(i<=mid){
		temp[cnt++]=arr[i++];
	}
	while(j<=high){
		temp[cnt++]=arr[j++];
	}
	cnt=0;
	for(int k=low;k<=high;k++){
		arr[k]=temp[cnt++];
	}
	return count;
}
int mergesort(vector<int>&arr,int low,int high){
	if(low>=high) return 0;
	int mid = (low+high)/2;
	int inv = mergesort(arr,low,mid);
	inv += mergesort(arr,mid+1,high);
	inv += merge(arr,low,mid,high);
	return inv;
}
int reversePairs(vector<int> &arr, int n){
		return mergesort(arr,0,n-1);
}
