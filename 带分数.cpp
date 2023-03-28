#include<bits/stdc++.h>
using namespace std;

int main() {
	int x[] = { 0,1,2,3,4,5,6,7,8,9 };
	int n;
	cin >> n;
	int cnt = 0;
	do {
		int a = 0;
		for (int i = 1; i < 8; i++) {
			a = a * 10 + x[i];
			int b = 0;
			for (int j = i + 1; j < 9; j++) {
				b = b * 10 + x[j];
				int c = 0;
				for (int k = j + 1; k < 10; k++) {
					c = c * 10 + x[k];
				}
				if (a + b / c == n && b % c == 0)cnt++;
			}
		}

	} while (next_permutation(x + 1, x + 10));

	cout << cnt;

	return 0;
}

