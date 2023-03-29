#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
    int k;
    string s;
    vector<string>v;
    cin >> k >> s;
    if (s.size() % k != 0)cout << -1;
    else {
        int t = s.size() / k;
        for (int i = 0; i < s.size(); i=i+t) {
            string x = s.substr(i, t);
            v.push_back(x);
        }
        int ans = 0;
        int cnt[26] = { 0 };//代表每个字符出现的次数
        for (int i = 0; i < t; i++) {
            for (int j = 0; j < k; j++) {
                char c = v[j][i];  //每个子串的第i个字符
                cnt[c - 'a']++;
            }
            int most = *max_element(cnt, cnt + 26);
            ans += k - most; //每次需要修改的个数
            fill(cnt, cnt + 26, 0);
        }
        cout << ans;
    }

    return 0;
}
