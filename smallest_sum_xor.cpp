// https://codeforces.com/group/9DComnjNUq/contest/402505/problem/A
#include <bits/stdc++.h>
using namespace std; 

void solution(vector<pair<int, int>> tc){
    for (int i = 0; i < tc.size(); i++)
        cout << (tc[i].first ^ tc[i].second) << "\n";
}

int main(){
    int tc_num;
    cin >> tc_num;
    vector<pair<int, int>> tc(tc_num);
    int a, b;
    for (int i = 0; i < tc_num; i++){
        cin >> a >> b;
        tc[i] = make_pair(a ,b);
    }
    solution(tc);
    return 0;
}