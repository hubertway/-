#include<bits/stdc++.h>
using namespace std;

string m[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

int main(){
	string s ;
	cin>>s;
	int y,r;
	for(int i=0;i<12;i++){
		if(s.substr(0,3) == m[i])
			y = i+1;
		r = stoi(s.substr(3,2));
	}
	cout<<y<<" "<<r<<endl;
	
	return 0;
}
