//https://codeforces.com/contest/1843/problem/E
#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define ll long long
int tc;
vector<int> arr, l, r, x;
int n;

bool bin(int mid){
    arr = vector<int>(n+1, 0);
    vector<int> pref(n+1);

    for (int i = 1; i <= mid; i++) arr[x[i]] = 1;
    for (int i = 1; i <= n; i++) pref[i] = pref[i-1] + arr[i];
    for(int i = 1; i < l.size(); i++){
        int ones = pref[r[i]] - pref[l[i] - 1];
        int zeros = r[i] - l[i] + 1 - ones;
        if (ones > zeros) return true;
    }
    return false;
}
void solve() {
    int m;
    cin >> n >> m;
    l = vector<int>(m+1);
    r = vector<int>(m+1);

    for (int i = 1; i <= m; ++i) cin >> l[i] >> r[i];
    int q; cin >> q;
    x = vector<int>(q+1);
    for (int i = 1; i <= q; ++i) cin >> x[i]; 

    int str = 0, end = q, ans = -1, mid;
    if (!bin(end)) return void(cout << -1 << "\n");
    if (bin(str)) return void(cout << str << "\n");

    while(str <= end){
        mid = (end + str)/2;
        // cout << "str = " << str << "; end = " << end << "; mid = " << mid << endl;
        if (bin(mid)) ans = mid, end = mid - 1;
        else str = mid + 1;
    }
    if (!bin(ans)) ans++; 
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    tc = 1; cin >> tc;
    while (tc--) solve();
}
