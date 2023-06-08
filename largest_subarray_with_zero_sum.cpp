int LongestSubsetWithZeroSum(vector < int > arr) {
		int n=arr.size();
		int sum1=0;
		map<int,int>m;
	    int max1=0;
	    int x;
	    for(int i=0;i<n;i++){
	       sum1=sum1+arr[i];
	       if(sum1==0){
	           max1=i+1;
	       }
	       else{
	       if(m.count(sum1)){
	           x=i-m[sum1];
	           if(x>max1)
	           max1=x;
	       }
	       else{
	       m[sum1]=i;
	       }
	       }
	    }
		return max1;
}
