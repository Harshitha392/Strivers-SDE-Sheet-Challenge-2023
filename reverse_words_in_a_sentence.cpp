#include <bits/stdc++.h>
string reverseString(string &str){
	if(str.size() == 0) 
            return str;
	stack<string>st;
	string ans;
	for(int i=0; i<str.size(); i++) 

	{
		string word="";
		if(str[i] == ' ') 
			continue; 
		while(i < str.size() && str[i] != ' ' ) { 
			word += str[i]; 
			i++;
		}
		st.push(word);
		}
	while(st.empty()==0)
		{
		ans += st.top(); 
		st.pop();
	if(!st.empty()) 
		{
			ans += ' ';
		}
	}
	return ans;
}
