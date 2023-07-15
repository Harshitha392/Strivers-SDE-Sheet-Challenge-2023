vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    int count1=0;
   vector<int>ans;

    map<int,int>m;

    for(int i=0;i<n;i++)

    {

        m[arr[i]]++;

    }
count1++;
    priority_queue<pair<int,int>>pq;

    for(auto i:m)

    {

        pq.push({i.second,i.first});

    }

    for(int i=1;i<=k;i++)

    {

        ans.push_back(pq.top().second);

        pq.pop();

    }

    sort(ans.begin(),ans.end());

    return ans;
}
