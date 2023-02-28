#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int num = max(max(a, b),c);
	for (; !(num % a == 0 && num % b == 0 && num % c == 0); num++);
	cout << num;
	return 0;
}
