#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	string ans;
	for(int i=0;i<s.size();){
		string t;
		if(i+1<s.size() && s[i+1]-'0'>0 && s[i+1]-'0'<=9){
			for(int j=0;j<s[i+1]-'0';j++) t += s[i];
			i = i+2;
		}
		else{
			t = s[i];
			i++;
		}
		ans = ans+t;
	}
	cout<<ans;
	return 0;
}
