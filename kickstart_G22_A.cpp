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
    vector<vector<int>> cases(tc_num, vector<int>(3));
    vector<vector<int>> scores;
    for (int i = 0; i < tc_num; i++){
        cin >> cases[i][0] >> cases[i][1] >> cases[i][2];
        for (int i = 0; i < cases[i][0]; i++){
        }
    }
    solution(tc);
    return 0;
}