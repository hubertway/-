#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int x = 0; x < n; x++) {
		int a, b;
		cin >> a >> b;
		char dna[40][40];

		for (int i = 0; i < a; i++)
			for (int j = 0; j < a; j++)
				dna[i][j] = ' ';


		for (int i = 0,j=a-1; i <a; i++,j--) {
			dna[i][i] = 'X';
			dna[i][j] = 'X';
		}
			
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < a; j++) {
				if (dna[i][j] == 'X')cout << dna[i][j];
				else cout << " ";
			}
			cout << endl;
		}

		while (b - 1) {
			for (int i = 1; i < a; i++) {
				for (int j = 0; j < a; j++) {
					if (dna[i][j] == 'X')cout << dna[i][j];
					else cout << " ";
				}
				cout << endl;
			}
			b--;
		}

		cout << endl;
	}
	return 0;
}
