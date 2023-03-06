#include<bits/stdc++.h>
using namespace std;

bool with2019(int x){
	bool flag = false;
	string s = "2019";
	string a = to_string(x);
	for(int i=0;i<a.size();i++){
		char t = a[i];
		for(int j=0;j<4;j++){
			if(t == s[j]){
				flag = true;
				break;
			}
		}
		if(flag) break;
	}
	return flag;
}

int main(){
	int n;
	cin>>n;
	int sum=0;
	for(int i=1;i<=n;i++){
		if(with2019(i)) sum += i;	
	}
	cout<<sum;
	return 0;
}
