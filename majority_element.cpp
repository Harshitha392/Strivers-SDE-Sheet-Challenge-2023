#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	int count=0;
	int ele=-1;
	for(int i=0;i<n;i++){
		if(count==0){
			ele=arr[i];
			count=1;
		}
		else{
			if(arr[i]==ele){
				count++;
            } 
			else {
                count--;
            }
        }
    }
	int count1=0;
	for(int i=0;i<n;i++){
		if(arr[i]==ele){
			count1++;
		}
	}
	if(count1>n/2)
	return ele;
	return -1;
}
