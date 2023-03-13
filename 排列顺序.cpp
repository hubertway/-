#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	string t = s;
	sort(s.begin(), s.end());
	int index = 0;
	do {
		if (t == s)cout << index;
		else index++;
	} while (next_permutation(s.begin(), s.end()));

	return 0;
}
