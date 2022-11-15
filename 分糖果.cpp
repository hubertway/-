#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++) cin >> v[i];
	int sum = 0;
	while (true) {
		vector<int>t(n);
		for (int i = 0; i < n; i++) t[i] = v[i] / 2;

		for (int i = n - 1; i > 0; i--) {
			v[i - 1] /= 2;
			v[i - 1] += t[i] ;
		}
		v[n - 1] /= 2;
		v[n - 1] += t[0];
		

		for (int i = 0; i < n; i++) {
			if (v[i] % 2 != 0) {
				v[i] += 1;
				sum++;
			}
		}

		bool flag = true;
		for (int i = 0; i < n-1; i++) {
			if (v[i] != v[i + 1]) {
				flag = false;
				break;
			}
		}

		if (flag) {
			cout << sum;
			break;
		}

	}
	
	return 0;
}
