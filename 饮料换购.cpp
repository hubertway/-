#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int sum = n;
	while (n/3) {
		sum = sum + n / 3;
		n = n / 3 + n % 3;
	}
	cout << sum;
	return 0;
}
