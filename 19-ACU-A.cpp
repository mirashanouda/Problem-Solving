//gates on x=y

/*
The wall and the gates do not belong to any of the kingdoms.

Fafa is at the gate at position (0, 0) and he wants to walk around in the two kingdoms. 
He knows the sequence S of moves he will do. This sequence is a string where each character represents a move. 
The two possible moves Fafa will do are 'U' (move one step up, from (x, y) to (x, y + 1)) and 
'R' (move one step right, from (x, y) to (x + 1, y)).

Fafa wants to know the number of silver coins he needs to pay to walk around the two kingdoms 
following the sequence S. 
Note that if Fafa visits a gate without moving from one kingdom to another, he pays no silver coins. 
Also assume that he doesn't pay at the gate at point (0, 0), i. e. he is initially on the side he needs.
*/

/*
input: n, string
out: int of conins 
*/
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std; 

int coins(int n, string s){
    int pay = 0;
    if (n <= 1)
    return 0;

    //starts from (0,0)
    //RURUUR > 
    //one king y > x -- other: y < x
    /*1,0 f=0
    1,1 f=0
    2,1 f=0
    2,2 f=0
    2,3 f=1

    T(1) 2,1 |  2,2 2,3 | F, 3.3 
    */
    int x = 0, y = 0;
    //initalize side 
    if(s[0] == 'U') y++;
    if(s[0] == 'L') x++;
    
    bool flag = true; 

    for (int i = 1; i < n; i++){
        if(s[i] == 'U') y++;
        if(s[i] == 'L') x++;

        if(x >= y && flag){
            continue;
        }
        else
            pay++;
    }
    return pay; 
}
int main() {

    int n; 
    cin >> n; 

    string s; 
    cin >> s;

    cout << coins(n, s) << endl; 

    return 0;
}