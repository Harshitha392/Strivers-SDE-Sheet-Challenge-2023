int maximumProfit(vector<int> &prices){
    int n=prices.size();
    int max1=0;
    for(int i=1;i<n;i++){
        if(prices[0]>prices[i]){
            prices[0]=prices[i];
        }
        else{
            max1=max(max1,prices[i]-prices[0]);
        }
    }
    return max1;
}
