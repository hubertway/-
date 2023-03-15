#include<bits/stdc++.h>
using namespace std;

string t[10]={"jia","yi","bing","ding","wu","ji","geng","xin","ren","gui"};
string d[12]={"zi","chou","yin","mao","chen","si","wu","wei","shen","you","xu","hai"}; 
string td[10000];

int main() {
	for(int i=1900,x=6,y=0;i<=9999;i++,x++,y++){
		if(x==10)x=0;
		if(y==12)y=0;
		td[i]= t[x]+d[y];	
	}
	
	for(int i=1900,x=6,y=0;i>=0;i--,x--,y--){
		if(x==-1)x=9;
		if(y==-1)y=11;
		td[i]= t[x]+d[y];
	}
	int y;
	cin>>y;
	cout<<td[y]; 

	return 0;
}
