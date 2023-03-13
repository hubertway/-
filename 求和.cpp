#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)cin>>v[i];
	
	long long sum = 0;
	long long s = 0;
	for(int i=0;i<n;i++)sum+=v[i];
	for(int i=0;i<n;i++){
		s += (sum-v[i])*v[i];
		sum = sum - v[i];
	}
	
	cout<<s;
	
	return 0;
}
