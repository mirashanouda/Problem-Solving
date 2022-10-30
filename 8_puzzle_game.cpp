#include <bits/stdc++.h>
using namespace std; 

typedef vecotor<vector<int>> vv;

//getInt: take vv and output an int with all valus in the
//getGrid: takes and int and return a grid with the values in the int. 
//print: print the grid with +-+-+-+ after eac how 
//findZero: to return the position of the 0 by passing the i and j be refereance. 
//getChild: 
//q is a pair where (state, its pairent)
//1st loop: for each level
//2nd loop: for each element in the level
//3rd loop: make children 
//emplace_back in the vector is prefred when I am passing another datatype like pair. I am just passing the parameters instead of constructing the datatype then pass it.
// the code doesn't work when the it has 0 steps. so we have to check if the goal is the same as start 

