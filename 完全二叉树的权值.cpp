#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>tree(n+1);
    for (int i = 1; i < n + 1; i++)cin >> tree[i];
    int level = 1;
    int ans = level;
    int index = 1;
    int maxlv, temp;
    maxlv = -1;
    while (true) {
        temp = 0;
        for (int i = index; i < pow(2, level)&&i<n+1; i++) 
            temp += tree[i];
      
        if (maxlv < temp) {
            maxlv = temp;
            ans =level;
        }
        if (level < log(n + 1) / log(2)) {
            level++;
            index = pow(2, level) - pow(2, level - 1);
        }
        else {
            break;
        }
    }
    cout << ans;
    return 0;
}
