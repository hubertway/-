#include <iostream>
using namespace std;

int main(){
    int n;
    int max = -1, min = 101;
    double sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
        sum += s;
        if (max < s)max = s;
        if (min > s)min = s;
    }

    printf("%d\n%d\n%.2f",max,min,sum/n );

    return 0;
}

