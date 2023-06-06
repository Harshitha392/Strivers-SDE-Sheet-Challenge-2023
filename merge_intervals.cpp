vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    int n=intervals.size();
    sort(intervals.begin(),intervals.end());
    vector<vector<int>>v;
    vector<int>v1;
    v1.push_back(intervals[0][0]);
    v1.push_back(intervals[0][1]);
    for(int i=1;i<n;i++){
        if(v1[1]>=intervals[i][0] && v1[1]>=intervals[i][1]){
        }
        else if(v1[1]>=intervals[i][0]){
            v1[1]=intervals[i][1];
        }
        else{
            v.push_back(v1);
            v1[0]=intervals[i][0];
            v1[1]=intervals[i][1];
        }
    }
    v.push_back(v1);
    return v;
}
