#include<bits/stdc++.h>
using namespace std;


int main() {
	string r,d;
	cin>>r>>d;
	int cnt = 0;
	for(int i=0;i<r.size()-1;i++){
		if(r[i]!=d[i]){
			r[i+1]= ( r[i+1]=='*'?'o':'*' );
			cnt++;
		}
	} 
	cout<<cnt;
	return 0;
}
