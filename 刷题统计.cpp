#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a,b,n;
	cin>>a>>b>>n;
	long long  sum=0;
	int day=0;
	while(sum<n){
		day++;
		if(day%7>=1 && day%7 <=5)sum += a;
		else sum +=b;
	}
	cout<<day;
	return 0;
}
