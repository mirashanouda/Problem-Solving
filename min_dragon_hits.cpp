#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool pred(ll k, ll h, vector<ll> hits){
    ll total_hits = 0;
    for (int i = 1; i < (int)hits.size(); ++i) total_hits += min((hits[i] - hits[i-1]), k);
    total_hits += k;
    return (total_hits >= h);
}

void solve (ll n, ll h){
    vector<ll> hits(n);
    for (auto &i : hits) cin >> i;

    ll l = 0;
    ll r = h;
    ll k;
    while (l < r){
        k = (l + r) / 2;
        if (pred(k, h, hits)) r = k;
        else l = k + 1;
    }
    if (!pred(k, h, hits)) k++;

    cout << k << "\n"; 
}

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        ll n, h;
        cin >> n >> h;
        solve(n, h);
    }

}