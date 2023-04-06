/*
如果爱丽丝刚刚修剪完第 i 棵树，那么她再次碰见这棵树要走的路都是相同的。
对于第i棵树来说，从i到n再到i，即高为2×(n−i)；或者从i到1再到i，即高为2×(i-1)。
取二者最大值。
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<max(n-i,i-1)*2<<endl;
	}
    return 0;
}

//暴力模拟会有超时的测试点
int main(){
	int n;
	cin >> n;
	vector<int>v(n);
	vector<int>max(n);
	for (int i = 0; i < n; i++) {
		v[i] = 0;
		max[i] = -1;
	}
	for (int x = 0; x < n; x++) {
		for (int i = 0; i < n; i++) {
			v[i]++;
			if (max[i] < v[i])max[i] = v[i];
		}
		v[x]=0;
	}
	for (int x = n - 2; x > -1; x--) {
		for (int i = 0; i < n; i++) {
			v[i]++;
			if (max[i] < v[i])max[i] = v[i];
		}
		v[x]=0;
	}
	for (int x = 1; x < n; x++) {
		for (int i = 0; i < n; i++) {
			v[i]++;
			if (max[i] < v[i])max[i] = v[i];
		}
		v[x] = 0;
	}
	for (int i = 0; i < n; i++)cout << max[i] << endl;

	return 0;
}
