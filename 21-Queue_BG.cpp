/*
letting the girls move forward each second.

Let's say that the positions in the queue are sequentially numbered by integers from 1 to n, 
at that the person in the position number 1 is served first. Then, if at time x a boy stands on the 
i-th position and a girl stands on the (i + 1)-th position, then at time x + 1 the i-th position 
will have a girl and the (i + 1)-th position will have a boy. The time is given in seconds.

You've got the initial position of the children, at the initial moment of time. 
Determine the way the queue is going to look after t seconds.


input: n,t 
s: BG

output: a
*/

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std; 

string arrange (string s, int n, int t){
     
    //int p1, p2; 
    for (int i = 0; i < t; i++)
    {
        int j = 0;
        while(j < n-1){
            if (s[j] == 'B' && s[j+1] =='G'){
                swap(s[j], s[j+1]);
                j=j+2;
            }
            else 
                j++;
        }
    }
    return s;
}
int main (){

    int n, t; 
    cin >> n >> t;
    string s; 
    cin >> s;

    cout << arrange(s,n,t) << endl;
    return 0;
}