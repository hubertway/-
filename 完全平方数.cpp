#include<iostream>
using namespace std;
typedef unsigned long long  ull;

int main() {
	ull a;
	ull ans = 1;
	cin >> a;
	for (ull i = 2; i * i < a; i++) {
		if (a % i == 0) {
			int cnt = 0;
			while (a % i == 0) {
				a /= i;
				cnt++;
			}
			if (cnt % 2 != 0) ans *= i;
		}
	}
	if (a != 1)ans *= a;
	cout << ans;
	return 0;
}

//暴力模拟，有很多测试点过去不，和浮点数精度有关。
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	int x = 1;
	while (true) {
		int a = x * n;
		int b = sqrt(a);
		if (b * b == a)break;
		x++;
	}
	cout << x;

	return 0;
}
