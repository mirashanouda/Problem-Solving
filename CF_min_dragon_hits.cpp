//https://codeforces.com/group/9DComnjNUq/contest/405016/problem/C
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int tc;
vector<vector<ll>> l2;
vector<pair<ll, ll>> l1;

bool pred(ll k, ll h, vector<ll> hits){
    // cout << "inside pred\n";
    /**A function that return true if number of total hits obtrained from a given k >= h*/
    //go through the hits:
    long long total_hits = 0;// = (int)hits.size();
    // cout << "first total hits = " << total_hits << "\n";
    for (int i = 1; i < hits.size(); ++i){
        total_hits += min((hits[i] - hits[i-1]), k);
        // total_hits += ((hits[i] - hits[i-1]) < k) ? (hits[i] - hits[i-1]): k;
        // printf("hits[i] = %d - hits[i-1] = %d - k = %d\n", hits[i], hits[i-1], k);
        // cout << "total hits = " << total_hits << "\n";
    }
    total_hits += k;
    // cout << "final total hits = " << total_hits << "\n";
    return (total_hits >= h);
}

void solution(){
    for (int i = 0; i < tc; ++i){
        //base case:
        ll h = l1[i].second;
        ll n = l1[i].first;
        // printf("n = %d - h = %d\n", n, h);
        if (h <= n){
            cout << 1 << "\n";
            continue;
        }
        ll start = 0,
        end = 1e18, 
        k;

        while (start < end){
            k = (start + end)/2; //maybe + 1
            if(pred(k, h, l2[i])) {
                end = k;
                // cout << "TURE(" << k << ") start = " << start << "  end = " << end << "\n";
            }
            else{
                start = k + 1;
                // cout << "False(" << k << ") start = " << start << "  end = " << end << "\n";
            }
        //    break;
        }
        if (!pred(k, h, l2[i])) k = k+1;

        cout << k << "\n";
    }

    // vector<int> hits(n);
    // for (int i = 0; i < n; ++i) cin >> hits[i];
    // cout << "After getting test cases\n";
    //binary search:
    
    // assert(pred(end, h, hits));
    // assert(pred(end, h, hits));
    
    //bush back ans
    // ans.push_back(k);
    return;
}

int main(){
    cin >> tc;
    // printf("tc = %d\n", tc);
    l1.resize(tc);
    l2.resize(tc);
    for (int i = 0; i < tc; i++){
        cin >> l1[i].first >> l1[i].second;
        l2[i].resize(l1[i].first);
        for (int j = 0; j < (int)l1[i].first; ++j) {
            cin >> l2[i][j];
        }
    }
    solution();
    // for (auto i : ans) cout << i << "\n";
    return 0;
}