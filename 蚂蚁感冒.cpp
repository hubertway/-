#include<bits/stdc++.h>
using namespace std;

struct ant {
	int loc;
	bool cold = false;
};

bool cmp(const ant x, const ant y) {
	return abs(x.loc) < abs(y.loc);
}

int main() {
	int n;
	cin >> n;
	vector<ant>A(n);
	for (int i = 0; i < n; i++) cin >> A[i].loc;
	A[0].cold = true;

	while (true) {
		sort(A.begin(), A.end(), cmp);
		bool flag = true; // 判定还有没有蚂蚁在杆子上,ture表示没有了
		for (int i = 0; i < n; i++) { //移动一步
			if (A[i].loc < 100 && A[i].loc > -100 && A[i].loc != 0 && A[i].loc != 100) {
				A[i].loc++;
				flag = false;

				if ( i>0 &&A[i].loc== -1*(A[i - 1].loc) && A[i].loc != 0 && A[i - 1].loc != 100) { //对比前一个
					A[i].loc = -A[i].loc;
					A[i - 1].loc = -A[i - 1].loc;
					if (A[i].cold || A[i - 1].cold) {
						A[i].cold = true;
						A[i - 1].cold = true;
					}
				}

				if ( i+1< n && A[i].loc ==-1*(A[i + 1].loc) && A[i].loc != 0 && A[i + 1].loc != 100) { //对比后一个
					A[i].loc = -A[i].loc;
					A[i + 1].loc = -A[i + 1].loc;
					if (A[i].cold || A[i +1].cold) {
						A[i].cold = true;
						A[i + 1].cold = true;
					}
				}

			}
		}
		if (flag == true) break;

	}

	int sum = 0;
	for (int i = 0; i < n; i++) if (A[i].cold) sum++;
	std::cout << sum;

	return 0;
}
