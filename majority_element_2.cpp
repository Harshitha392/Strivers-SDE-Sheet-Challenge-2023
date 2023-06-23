#include <bits/stdc++.h>
using namespace std;
vector<int> majorityElementII(vector<int> &arr)
{
    int n = arr.size();
    int c1 = 0;
    int c2 = 0;
    int ele1 = 0;
    int ele2 = 0;
    vector<int>v;
    for(int i=0;i<n;i++) {
        if(ele1 == arr[i]) {
            c1++;
        }
        else if(ele2 == arr[i]) {
            c2++;
        }
        else if(c1 == 0) {
            ele1 = arr[i];
            c1++;
        }
        else if(c2 == 0) {
            ele2 = arr[i];
            c2++;
        }
        else {
            c1--;
            c2--;
        }
    }
    c1 = 0;
    c2 = 0;
    for(int i=0;i<n;i++) {
        if(ele1 == arr[i]) {
            c1++;
        }
        if(ele2 ==arr[i]) {
            c2++;
        }
    }
    if(c1 > n / 3) {
        v.push_back(ele1);
    }
    if(c2 > n / 3) {
        v.push_back(ele2);
    }
    return v;
}
