//https://codeforces.com/contest/1843/problem/D
#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define ll long long
int tc;
const int N = 2 * 1e5 + 2;
ll dp[N];
vector<vector<int>> g;

ll dfs(int node, int par){
    for (auto u : g[node]) if (u != par) dp[node] += dfs(u, node);
    return dp[node] = max(dp[node], 1ll);
}
void solve() {
    memset(dp, 0, sizeof(dp));
    int n; cin >> n;
    g.clear();
    g.resize(n+1);
    n--;
    while(n--){
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    dfs(1, 0);
    int q; cin >> q;
    while(q--){
        ll x, y; cin >> x >> y;
        cout << dp[x] * dp[y] << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    tc = 1; cin >> tc;
    while (tc--) solve();
}
