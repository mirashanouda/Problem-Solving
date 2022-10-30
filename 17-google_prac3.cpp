#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

int Solve (int N, vector <int> A) {
   // Write your code 
   int max = INT_MIN;
   int val;
   unordered_map<int, int> close;
   for (int i = 0; i < N; i++){
       if (A[i] < 0){
           close[A[i]] = A[i];
       }
       else
            close[A[i]] = (0 - A[i]);
       //cout << A[i] << " --> " << close[A[i]] << endl;
       if (max < close[A[i]]){
           max = close[A[i]];
           val = A[i];
       }
       else if (max == close[A[i]]) //equal dis +/-
       {
           val = (val > A[i]) ? val : A[i];
       }
   }
   return val;
}


int main(){

    vector<int> a {5, 2, -2, -5};
    cout << Solve(4, a) << endl;
    return 0;
}
