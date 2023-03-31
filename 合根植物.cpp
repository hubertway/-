//并查集
#include <iostream>
using namespace std;
int root[1000001] = { 0 };
int  findroot(int x) {
    return x == root[x] ? x : root[x] = findroot(root[x]);
}
int main() {
    int m, n, k;
    cin >> m >> n >> k;
    int sum = m * n;
    for (int i = 0; i < sum; i++) root[i] = i;

    for (int i = 0; i < k; i++) {
        int u, v;
        cin >> u >> v;
        if (findroot(u) != findroot(v)) {
            root[findroot(u)] = findroot(v);
            sum--;
        }
    }
    cout << sum;
    return 0;
}



//dfs
#include <iostream>
using namespace std;
int g[1001][1001] = { 0 };
int visited[1000001] = { false };
int m, n, k;
void dfs(int v) {
    visited[v] = true;
    for (int i = 1; i <= m * n ; i++) 
        if (g[v][i] == 1 && !visited[i])  dfs(i);
}
int main() {
    cin >> m >> n >> k;
    for (int i = 0; i < k; i++) {
        int u, v;
        cin >> u >> v;
        g[u][v] = 1;
        g[v][u] = 1;
    }
    int ans = 0;
    for (int ver = 1; ver <= m * n; ver++) {
        if (!visited[ver]) {
            dfs(ver);
            ans++;
        }
    }
    cout << ans;;
    return 0;
}
