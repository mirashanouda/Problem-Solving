//https://codeforces.com/group/9DComnjNUq/contest/405016/problem/A
#include <bits/stdc++.h>
using namespace std; 
typedef long long ll;
vector<int> prof;
int n, m;

bool pred(int t){
    /*
    3 cases:
        - I have extra tasks and some free time
        - I dont have extra tasks but I have free time. 
            - If I have tasks to finish --> can they be finished in t + free_t/2? 
    */
    int extra_tsk = 0; //needs to be deliverd to other workers
    int free_t = 0;
    int completed = 0;
    for(int p : prof){
        if (t >= p){
            // completed += p;
            free_t += (t - p)/2;
        }
        else {
            extra_tsk += p - t;
            // completed += t;
        }
    }
    // printf("extra_tsk = %d, free_t = %d\n", extra_tsk, free_t);
    // if (completed < m){
    //     extra_tsk += (m - completed);
    // }
    // int total_time = free_t/2;
    // int reqired = m + extra_tsk;
    return extra_tsk <= free_t;
}

void solution(){
    cin >> n >> m;
    int temp;
    prof.resize(n);
    fill(prof.begin(), prof.end(), 0);
    for (int i = 0; i < m; i++) {
        cin >> temp;
        // cout << "a[i] = " << a[i] << endl;
        prof[--temp]++;
        
    }
    // cout << "prof: ";
    // for (auto i : prof) cout << i << " "; 
    // cout << endl;
    //binary search for time
    int start = 0, //false
        end = m*2; //true -- worest case: only one worker not proficient in any task takes 2m
    int t; //I can brefore all tasks in time at least t
    int ans;
    while(start < end){ //1 2 3 4 5 6 
        t = (start + end)/2;
        // printf("start %d - end = %d - t = %d\n", start, end, t);
        if (pred(t)) {
            ans = t;
            end = t - 1;
        }
        else start = t + 1;
    }
    if (!pred(t)) t++;
    cout << t << "\n";
}

int main(){
    int tc = 1; //cin >> tc;
    while (tc--) solution();
    return 0; 
}
