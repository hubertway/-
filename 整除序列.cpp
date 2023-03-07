#include<bits/stdc++.h>
using namespace std;

int main(){
	long long n;
	cin>>n;
	while(n){
		cout<<n;
		n /=2;
		if(n) cout<<" ";
		else cout<<endl;
	} 
	return 0;
}
