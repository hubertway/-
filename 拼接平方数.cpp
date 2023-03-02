#include<iostream>
#include<cmath>
using namespace std;

bool isSq(int n) {
	int s = (int)sqrt(n);
	return s*s == n?true : false;
}

bool isSplitSq(int n) {
	if (n < 49) return false;
	bool flag = false;
	int i = 10;
	while (n / i) {
		int a, b;
		a = n % i;
		b = n / i;
		if (a && b && isSq(a) && isSq(b)) {//都不是0,且都能开方出整数 
			flag = true;
			break;
		}
		else i *= 10;
	}
	return flag;
}


int main() {
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		if (isSq(i)) {
			if (isSplitSq(i)) {
				cout << i << endl;
			}
		}
	}

	return 0;
}
