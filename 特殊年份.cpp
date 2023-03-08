#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int cnt = 0;
	while(cin>>s){
		if(s[0]==s[2] && (s[1]-'0')==(s[3]-'0'-1))
			cnt++;
	}
	cout<<cnt; 
	return 0;
}
