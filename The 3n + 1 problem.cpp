#include <iostream>
using namespace std;

int cnt = 0;
int pro(int n) {
	cnt++;
	if (n == 1) {
		return 1;
	}
	else {
		if (n % 2 == 0) n /= 2;
		else n = 3 * n + 1;
		return pro(n);
	}
}

int main() {
	int t = 4;
    while(t){
		int i, j;
		cin >> i >> j;
		int a = i, b = j;
		int temp = i;
		if (i > j) {
			i = j;
			j = temp;
		}

		int maxl = 0;
		for (int x = i; x < j + 1; x++) {
			pro(x);
			if (maxl < cnt)maxl = cnt;
			cnt = 0;
		}
		cout << a << ' ' << b << ' ' << maxl << endl;
		t--;
	}
	return 0;
}
