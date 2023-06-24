#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    sort(arr.begin(),arr.end());
    //vector<vector<int>>ans;
    for(int i=0;i<n;i++){
        if(i>0 && arr[i]==arr[i-1]) continue;
        for(int j=i+1;j<n;j++){
            if(j>(i+1) && arr[j]==arr[j-1]) continue;
            int k=j+1;
            int l=n-1;
            while(k<l){
                long long sum1=arr[i]+arr[j]+arr[k]+arr[l];
                if (sum1 == target) {
                  return "Yes";
                  // vector<int>v = {arr[i],arr[j],arr[k],arr[l]};
                  // ans.push_back(v);
                  k++;
                  l--;
                  while(k<l && arr[k]==arr[k-1]) k++;
                  while(k<l && arr[l]==arr[l+1]) l--; 
                } else if (sum1 > target) {
                  l--;
                } else {
                  k++;
                }
            }
        }
    }
    return "No";
    // if(ans.size()==0) 
    // return "No";
    // return "Yes";
}
