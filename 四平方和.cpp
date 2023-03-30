#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a, b, c, d;
    a = b = c = d = 0;
    for (a = 0; a <= b; a++){
        for (b = a; b <= c; b++){
            for (c = b; c <= d; c++) {
                d = sqrt(n - (a * a + b * b + c * c));
                if (d * d == n - (a * a + b * b + c * c))
                    goto stop;
            }
        }
    }
    stop:
    cout << a << ' ' << b << ' ' << c << ' ' << d << endl;
    return 0;
}
