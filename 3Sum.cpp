#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	vector<vector<int>>ans;
	sort(arr.begin(),arr.end());
	int i=0;int j=n-1;int k=0;
	for(int i=0;i<n;i++){
		int sum1=K;
		sum1=sum1-arr[i];
		k=i+1;
		j=n-1;
		while(k<j){
			if(arr[k]+arr[j]==sum1) {
				vector<int>v;
				v.push_back(arr[i]);
				v.push_back(arr[k]);
				v.push_back(arr[j]);
				ans.push_back(v);
				k++;
				j--;
			}
			else if(arr[k]+arr[j]>sum1) j--;
			else k++;
		}
	}
	sort(ans.begin(),ans.end());
	ans.erase(unique(ans.begin(),ans.end()),ans.end());
	return ans;
}
