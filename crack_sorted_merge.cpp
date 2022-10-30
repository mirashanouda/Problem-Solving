/*
Sorted Merge: You are given two sorted arrays, A and B, where A has a large enough buffer at the
end to hold B. Write a method to merge B into A in sorted order.
*/

#include <bits/stdc++.h>
using namespace std; 

//[4,5, 0 , 4, 5], B = [0,1,2]

void sortedMerge(vector<int> A, vector<int> B){
    int p1 = A.size() - B.size() - 1,
        p2 = B.size() - 1, //pointers to the end of each array
        last = A.size() - 1;

    while(p2 >= 0){
        if (A[p1] >= B[p2] && p1 >= 0){
            A[last] = B[p1];
            p1--;
        }
        else {
            A[last] = B[p2];
            p2--;
        }
        last--;
    }
}