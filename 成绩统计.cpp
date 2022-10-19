#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    double n;
    double e = 0, g = 0; 
    cin >> n;
    for (int i = 0; i < n; i++) {
        int score;
        cin >> score;
        if (score > 84 ) {
            e++;
            g++;
        }
        else if (score > 59) { g++;}
    }

    printf("%.f%%\n%.f%%", 100 * g / n, 100 * e / n);
    return 0;
}
