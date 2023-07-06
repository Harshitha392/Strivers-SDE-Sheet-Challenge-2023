int removeDuplicates(vector<int> &arr, int n) {
	int count=0;
	if(n==0 ||n==1) return n;
	int i=0;
	int j=0;
	while(i<n && j<n){
		while(arr[i]==arr[j]){
			j++;
		}
		count++;
		i=j;
	}
	return count;
}
