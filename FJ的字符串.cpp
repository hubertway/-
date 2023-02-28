#include <iostream>
#include <string>
using namespace std;

string a[26] = { "A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z" };

int main() {
	int n;
	cin >> n;
	string s = "A";
	for (int i = 1; i < n; i++) {
		s = s + a[i] + s;
	}
	cout << s;
	return 0;
}
