#include<iostream>
#include<string>
#include<set>
using namespace std;

bool isLeap(int y) {
	bool f = false;
	if (y % 4 == 0 && y % 100 != 0) f = true;
	if (y % 400 == 0)f = true;
	return f;
}

bool isRight(int y,int m, int d) {
	if (m > 12)return false;
	bool f = false;
	int x[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
	if (isLeap(y) && d > 0 && d <= x[m - 1]) f = true;
	x[1] = 28;
	if (!isLeap(y) && d > 0 && d <= x[m - 1])  f = true;
	return f;
}

int main() {
	string s;
	cin >> s;
	int a = stoi(s.substr(0, 2));
	int b = stoi(s.substr(3, 2));
	int c = stoi(s.substr(6, 2));

	set<long long>v;

	if (a >= 60 && a <= 99) v.insert(19000000 + a * 10000 + b * 100 + c);
	else v.insert(20000000 + a * 10000 + b * 100 + c);

	if (c >= 60 && c <= 99) {
		v.insert(19000000 + c * 10000 + b * 100 + a);
		v.insert(19000000 + c * 10000 + a * 100 + b);
	}
	else {
		v.insert(20000000 + c * 10000 + b * 100 + a);
		v.insert(20000000 + c * 10000 + a * 100 + b);
	}

	for (auto it = v.begin(); it != v.end(); it++) {
		int year =*it/ 10000, mon = (*it % 10000) / 100, day = *it % 100;
		if (isRight(year,mon, day)) {
			cout << year << "-";
			if (mon < 10)cout << 0;
			cout << mon << "-";
			if (day < 10)cout << 0;
			cout << day << endl;
		}
	}

	return 0;
}
