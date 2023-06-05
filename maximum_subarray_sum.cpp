long long maxSubarraySum(int arr[], int n)
{
    long long int sum1=0;
    long long int ans=0;
    long long int max1=INT_MIN;
    for(long long int i=0;i<n;i++){
        sum1=sum1+arr[i];
        if(sum1<0)
        {
            sum1=0;
        }
        ans=max(ans,sum1);
        max1=max(max1,ans);
    }
    return max1;
}
