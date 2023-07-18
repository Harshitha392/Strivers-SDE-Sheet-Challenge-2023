int trap(vector<int>& arr) {
        int n =arr.size();
        int l=0;
        int r=n-1;
        int leftmax = 0;
        int rightmax = 0;
        int count=0;
        while(l<r){
            if(arr[l]<=arr[r]){
                if(arr[l]>=leftmax) leftmax = arr[l];
                else{
                    count=count+leftmax-arr[l];
                }
                l++;
            }
            else{
                if(arr[r]>=rightmax) rightmax = arr[r];
                else{
                    count=count+rightmax-arr[r];
                }
                r--;
            }
        }
        return count;
    }
