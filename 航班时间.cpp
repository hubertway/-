#include<bits/stdc++.h>
using namespace std;

int gettime(string s) {
    int h1 = stoi(s.substr(0, 2));
    int m1 = stoi(s.substr(3, 2));
    int s1 = stoi(s.substr(6, 2));
    int t1 = h1 * 60 * 60 + m1 * 60 + s1;
    int h2 = stoi(s.substr(9, 2));
    int m2 = stoi(s.substr(12, 2));
    int s2 = stoi(s.substr(15, 2));
    int t2 = h2 * 60 * 60 + m2 * 60 + s2;
    if (s.size() > 20) {
        int d = stoi(s.substr(20, 1));
        t2 += d * 24 * 60 * 60;
    }
    return t2 - t1;
}

int main() {
    int n;
    cin >> n;
    getchar();
    for (int i = 0; i < n; i++) {
        string str1,str2;
        getline(cin, str1);
        getline(cin, str2);
        int x =gettime(str1);
        int y = gettime(str2);
        int res = (y - x) / 2; //时差
        int dis = x + res;
        //输出
        int h = dis / 60 / 60 % 24;
        int m = dis / 60 % 60;
        int s = dis % 60;
        printf("%02d:%02d:%02d\n", h,m,s);

    }
    return 0;
}
