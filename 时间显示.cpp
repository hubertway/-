#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    n /= 1000;
    int s = n % 60;
    int m = n / 60 % 60;
    int h = n / 60 / 60 % 24;
    if (h < 10) { cout << '0' ; }
    cout << h << ':'; 
    if (m < 10) { cout << '0' ; }
    cout << m << ':';
    if (s < 10) { cout << '0' ; }
    cout << s; 
    return 0;
}
