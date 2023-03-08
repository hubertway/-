#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int cnt = 0;
	cin>>n;
	for(int i=1;i<n;i++){
		if(i*i%n < n*1.0/2)
			cnt++;
	}
	cout<<cnt;
	return 0;
}
