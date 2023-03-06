#include<bits/stdc++.h>
using namespace std;

int main(){
	int w,m,n;
	cin>>w>>m>>n;
	
	int mr = (m-1)/w;//m所在行 
	int nr = (n-1)/w;//n所在行 
	int cs = abs(mr-nr); //纵向距离
	
	int mc,nc; //m、n所在列
	if(mr%2==1){
		mc=w-m%w;
	}
	else{
		if(m%w)mc = m%w-1;
		else mc = w-1;
	}
	if(nr%2==1){
		nc=w-n%w;
	}
	else{
		if(n%w)nc = n%w-1;
		else nc = w-1;
	}	
	int rs = abs(mc-nc); //横向距离 
		
	int step = rs+cs; //总距离 
	cout<<step; 
	
	return 0;
}
