#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	while (cin >> s) {
		int j = 0;
		string x="";
		bool flag = true;
		for (int i = 0; i < s.size()+1; i++) {
			if (s[i] != '.' && i < s.size()) {
				if ((s[i] - '0') >= 0 && (s[i] - '0') <= 9)
					x += s[i];
				else {
					flag = false;
					break;
				}
			}
			else {
				int d = stoi(x);
				if (!(d >= 0 && d <= 255)) {
					flag = false;
					break;
				}
				x = "";
			}
		}

		if (flag) cout << "Y" << endl;
		else cout << "N" << endl;
	}

	return 0;
}
