bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int i=0;
        int j=0;
        j=m-1;
        while(i<n && i>=0 && j<m && j>=0){
            if(i<0 || j<0 || i>n || j>m)
            return false;
            if(target==matrix[i][j])
            return true;
            if(target>matrix[i][j]){
                i++;
            }
            else{
                j--;
            }
        }
        return false;
    }
