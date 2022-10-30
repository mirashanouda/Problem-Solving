//https://codeforces.com/group/9DComnjNUq/contest/402505/problem/B
#include <bits/stdc++.h>
using namespace std;

void solution(vector<pair<int, int>> tc){
    for (auto t : tc){
        int a = t.first,
            b = t.second,
            sub_ops = 1, // 1 becasue there is always an OR at the end
            mask = b;
        for (int sub_mask = a; mask != (sub_mask|mask); mask++) sub_ops++;
        cout << min(b - a, sub_ops) << '\n';
    }
    return;
}

int main(){
    int tc_num;
    cin >> tc_num;
    vector<pair<int, int>> tc(tc_num);
    for (int i = 0; i < tc_num; i++){
        cin >> tc[i].first >> tc[i].second; 
    }
    solution(tc);
    return 0;
}