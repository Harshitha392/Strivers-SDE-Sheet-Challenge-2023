#include <bits/stdc++.h> 
bool find(int mid,int n,int m,vector<int>time){
	int count =0;
	long long sum1=0;
	for(int i=0;i<m;i++){
		if(sum1+time[i]<=mid){
			sum1=sum1+time[i];
		}
		else{
			sum1=time[i];
			count++;
		}
	}
	return count<n;
}
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	int max1=0;
	long long int sum1=0;
	for(int i=0;i<m;i++){
		max1=max(max1,time[i]);
		sum1=sum1+time[i];
	}
	long long int l=max1;
	long long int h= sum1;
	long long int ans=0;
	while(l<=h){
		long long int mid = (l+h)/2;
		if(find(mid,n,m,time)){
			h=mid-1;ans = mid;
		}
		else{
			l = mid+1;
		}
	}
	return ans;
}
