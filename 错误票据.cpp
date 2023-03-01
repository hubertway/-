#include<iostream>
using namespace std;

int main() {
	int a[100001] = { 0 };
	int n;
	cin >> n;
	int temp;
	while (cin >> temp) a[temp]++;

	int index = 0; //找到起始位置
	for (int i = 0; i < 10001; i++) {
		if (a[i] != 0) {
			index = i;
			break;
		}
	}
	//先找断号
	for (int i = index; i < 10001; i++) {
		if (a[i] == 0) {
			cout << i << " ";
			break;
		}
	}
	//再找重号
	for (int i = index; i < 10001; i++) {
		if (a[i] > 1) {
			cout << i << " ";
			break;
		}
	}
	return 0;
}
