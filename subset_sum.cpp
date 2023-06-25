vector<int> subsetSum(vector<int> &num){
	vector<int>ans;
	ans.push_back(0);
	int n=num.size();
	int tot=(1LL<<n);
	for(int i=1;i<tot;i++){
		int sum1=0;
		for(int j=0;j<floor(log2(i))+1;j++){
			if(i&(1<<j)){
				sum1=sum1+num[j];
			}
		}
		ans.push_back(sum1);
	}
	sort(ans.begin(),ans.end());
	return ans;
}
