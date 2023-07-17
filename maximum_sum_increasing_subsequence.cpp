#include <bits/stdc++.h> 
int maxIncreasingDumbbellsSum(vector<int> &arr, int n)
{
	int ans=arr[0];
	vector<int>dp=arr;
	for (int i=1;i<n;i++)
	{
		for (int j=0;j<i;j++)
		{
			if (arr[i]>arr[j])
			{
				dp[i]=max(dp[j]+arr[i],dp[i]);
			}
		}
		ans=max(ans,dp[i]);
	}
	return ans;
}
