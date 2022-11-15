#include <iostream>
#include <string>
using namespace std;

bool palindrome(int x) {
	string s = to_string(x);
	bool flag = true;
	for (int i = 0; i < s.size()/2; i++) {
		if (s[i] != s[s.size() - 1 - i]) {
			flag = false;
			break;
		}
	}
	return flag;
}

int dsum(int x) {
	string s = to_string(x);
	int sum = 0;
	for (int i = 0; i < s.size(); i++) sum += (s[i] - '0');
	return sum;
}

int main() {
	int n;
	cin >> n;
	bool flag = false;
	for (int x = 10001; x < 1000000; x++) {
		if (palindrome(x))
			if (dsum(x) == n) {
				flag = true;
				cout << x << endl;
			}
				
	}
	if (!flag) cout << -1 << endl;
	return 0;
}
