/*
Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise, 
return the number of negative numbers in grid.
*/

/*
Seen in an discussion:
++++++
++++--
++++--
+++---
+-----
+-----


*/

#include<iostream>
#include<vector>
using namespace std; 
int countNegatives(vector<vector<int>>& grid) {
    //starting from the last row as it contains the largest number of negatives
    int rows = grid.size();
    int cols = grid[0].size();
    int c = 0; //index of cols 
    int r = rows - 1; //index of rows (last row)
    int count = 0; 

    while(c < cols && r >= 0){
        //last row and col I have now
        //if negative
        if(grid[r][c] < 0){ 
            count += (cols - c); // I got all the -ve in this row
            r--; //move to the above row       
        }
        else 
            c++;//move to the next index in the row 
    }
    return count; 
}

int main(){

    vector<vector<int>> grid = {
        {4,3,2,-1},
        {3,2,1,-1},
        {1,1,-1,-2},
        {-1,-1,-2,-3}
    };

    grid = {
        {3,2},
        {1, 0}
    };
    cout << countNegatives(grid) << endl;
    return 0;
}