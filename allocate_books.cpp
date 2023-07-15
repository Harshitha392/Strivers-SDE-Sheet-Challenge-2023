#include <bits/stdc++.h> 
long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	long long max1 = INT_MIN;
    for(int i = 0; i < m; i++){
        max1 = max(max1, (long long)time[i]);
    }   
    long long l= max1, h= 1e18, ans = 1e18;
    while(l<= h){
        long long mid = (l+h) / 2;
        long long count = 1;
        long long sum = 0;
        for(int i = 0; i < m; i++){
            if(sum + time[i] > mid){
                sum = 0;
                count++;
            }
            sum += time[i];
        }
        if(count > n){
            l= mid + 1;
        }else{
            ans = min(ans, mid);
            h= mid - 1;
        }
    }
    return ans;
}
