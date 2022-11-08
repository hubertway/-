#include <iostream>
using namespace std;

int cow(int n) {
	if (n <= 4) return n;
	return cow(n - 1) + cow(n - 3);
}

int main() {
	while (true) {
		int n;
		cin >> n;
		if (n == 0)break;
		else cout << cow(n)<<endl;
	}
	return 0;
}
