#include <bits/stdc++.h> 
void find(vector<string>&ans,int n,string s,int i){
    if(i == n){
        ans.push_back(s);
        return ;
    }
    for(int j=i;j<n;j++){
        swap(s[i],s[j]);
        find(ans,n,s,i+1);
        swap(s[i],s[j]);
    }
}
vector<string> findPermutations(string &s) {
    int n = s.length();
    vector<bool>v(n,false);
    vector<string>ans;
    int i=0;
    string str = s;
    find(ans,n,s,0);
    return ans;
}
