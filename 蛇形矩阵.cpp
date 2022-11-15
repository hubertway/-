#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int snake[101][101] = {0,};
	int x = 1;
	
	for (int k = 0; k < n; k++) {
		for (int i = k, j = 0; i > -1 && j <= k; i--, j++) {
			snake[i][j] = x;
			x++;
		}
	}

	for(int i=0;i<n;i++)
		for (int j = 0; j < n; j++) {
			if (snake[i][j]) {
				cout << snake[i][j];
				if (snake[i][j+1]) cout << " ";
				else cout << endl;
			}
			else break;
		}

	return 0;
}
