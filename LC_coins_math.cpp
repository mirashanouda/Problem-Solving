/*


Solution: Math ides: 

As a reminder, the constraint of the problem can be expressed as follows:

k(k + 1) <= 2N
k^2 + K <= 2N
This could be solved by completing the square technique,

k^2 + K + 1/4 - 1/4 <= 2N
(k + 0.5)^2 + 0.25 <= 2N 

*/

#include <bits/stdc++.h>
using namespace std;


int arrangeCoins(int n) {
    //O (n)
    //int count = 0;
    //for(int i = 1; i <= n; i++){
    //    count++;//1,2,3 
    //    n -= i;//7,5,2
    //}
    //
    //return count;

    //O(1) using math: 
    return (int)(sqrt(2 * n + 1.0/4) - 1.0/2);
}

int main(){

    cout << arrangeCoins(8) << "\n"; 
    return 0;
}



