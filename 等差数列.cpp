#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<unsigned long long int>v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	sort(v.begin(),v.end());
	int di=999999;
	for(int i=0;i<n-1;i++){
		if(v[i+1]-v[i] < di)
			di = v[i+1]-v[i];
	}
	int cnt=1;
	int x=v[0];
	while(x!=v[n-1] || cnt<n){
		cnt++;
		x+=di;
	}
	cout<<cnt;
	return 0;
}
