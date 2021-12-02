#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

long long rec_solve(int n, long long count){
    if (n <= 0 || n > 5) return 0;

    long long sNum = count + rec_solve(n - 1, count);
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++)
            sNum++;
    }
    return sNum;
}


long long solve (int n) {
   // Type your code here
   return rec_solve(n, 0);
}

int main() {
    
    cout << solve(2) << endl;
}