#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int ans = 0;
    for (int i = 0; i < n; i++) { //依次冲0~n-1位置开始拿卡片
        int index = i;
        int result = 0; //每次得到的最大数字
        int call = 1; //从1开始数数
        vector<int>t = v; //每次都得重新用整个卡片组尝试
        while (!t.empty() && call <= *max_element(t.begin(), t.end())) { //卡片组不空，且数的数字不大于最大卡片值
            if (t[index] == call) {
                result += t[index];
                t.erase(t.begin() + index); //删除被拿掉的卡片
                call = 1;  //重新开始数数字
                if (t.size() == 0)break;
                index = (index) % t.size(); //卡片组长度变了，区域以防越界
            }
            else { //下标和数的数字都加1
                call += 1;
                index = (index + 1) % t.size();
            }
        }
        if (result > ans) ans = result; //选择最大的分数
    }
    cout << ans;
    return 0;
}
