#include <iostream>
#include <vector>
using namespace std;

int max(int a,int b) {
    if (a > b) return a;
    else return b;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>>l;
    for (int i = 0; i < n; i++) {
        vector<int> a;
        for (int j = 0; j < i + 1; j++) {
            int t;
            cin >> t;
            a.push_back(t);
        }
        l.push_back(a);
    }

    for (int i = 1; i < n; i++) { //从第二层累加
        for (int j = 0; j < i+1; j++) {
            if(j==0){ //最左边元素只能由右上方得到
                l[i][j] += l[i - 1][j];
            }
            else if (j == i) { //最右边元素只能由左上方得到
                l[i][j] += l[i - 1][j - 1];
            }
            else { // 其余元素由上方较大值得到
                l[i][j] += max(l[i - 1][j], l[i - 1][j - 1]);
            }
        }
    }

    if (n % 2 != 0) {
        cout << l[n - 1][n/2];
    }
    else {
        cout << max(l[n - 1][n / 2], l[n - 1][n / 2 -1]);
    }

    return 0;
}

