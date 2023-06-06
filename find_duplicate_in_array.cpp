int findDuplicate(vector<int> &nums, int n){
	int s=nums[0];
	int f=s;
	s=nums[f];
	f=nums[nums[f]];
	while(s!=f){
		s=nums[s];
		f=nums[nums[f]];
	}
	f=nums[0];
	while(s!=f){
		s=nums[s];
		f=nums[f];
	}
	return s;
}
