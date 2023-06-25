#include <bits/stdc++.h> 
int uniqueSubstrings(string s)
{
    int n=s.length();
    map<char,int>m;
    int i=0,j=0;
    int max1=INT_MIN;
    while(i<n && j<n){
        m[s[j]]++;
        if(m[s[j]]>1){
            while(m[s[j]]>1){
            m[s[i]]--;
            if(m[s[i]]==0) m.erase(s[i]);
            i++;
            }
        }
        int k=m.size();
        max1=max(max1,k);
        j++;
    }
    int k=m.size();
    max1=max(max1,k);
    if(max1==INT_MIN )
    return 0;
    return max1;
}
