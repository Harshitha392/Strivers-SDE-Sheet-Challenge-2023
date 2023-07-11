#include <bits/stdc++.h> 
bool solve(int mid,vector<int>position,int n,int c){
	int place=0;
	place=position[0];
	int count=1;
	for(int i=1;i<n;i++){
	    if((position[i]-place)>=mid){
	        place=position[i];
	        count++;
	    }
	}
	if(count>=c)
	return true;
	return false;
}
int chessTournament(vector<int> positions , int n ,  int c){
	int l=0;
	sort(positions.begin(),positions.end());
	int h=positions[n-1];
	int ans;
	while(l<=h){
		int mid = (l+h)/2;
		if(solve(mid,positions,n,c)){
			ans= mid;
			l=mid+1;
		}
		else{
			h=mid-1;
		}
	}
	return ans;
}
