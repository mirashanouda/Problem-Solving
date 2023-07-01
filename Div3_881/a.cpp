//https://codeforces.com/contest/1843/problem/A
#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define ll long long
int tc;

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    for (auto & a : arr) cin >> a;
    sort(arr.begin(), arr.end());
    int j = n-1;
    int sum = 0;
    for (int i = 0; i < j; i++) sum += (arr[j] - arr[i]), j--;
    cout << sum << "\n";
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    tc = 1; cin >> tc;
    while (tc--) solve();
}
