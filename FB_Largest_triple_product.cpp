/*
You're given a list of n integers arr[0..(n-1)]. You must compute a list output[0..(n-1)] such that, 
for each index i (between 0 and n-1, inclusive), output[i] is equal to the product of 
the three largest elements out of arr[0..i] (or equal to -1 if i < 2, as arr[0..i] then includes fewer than three
elements).
Note that the three largest elements used to form any product may have the same values as one another, but they must be at different indices in arr.

N, each element in the array 

*/


#include <iostream>
#include <queue>
#include <vector> 
using namespace std; 


vector <int> findMaxProduct(vector <int> arr) {
  
    vector <int> maxPro(arr.size()); //empty
    if(arr.size() == 0)
        return maxPro;

    priority_queue<int> qu;
    int t1, t2, t3;
    for (int i = 0; i < arr.size(); i++){
        if (i < 2){ //0, 1
            maxPro[i] = -1; 
            qu.push(arr[i]);
        }
        else {
            qu.push(arr[i]); //inserting the current value --> then sorted 
            t1 = qu.top(); qu.pop();
            t2 = qu.top(); qu.pop();
            t3 = qu.top(); qu.pop();
            maxPro[i] = t1 * t2 * t3;
            //insert them again:
            qu.push(t1); 
            qu.push(t2);
            qu.push(t3);
        }
    }
    return maxPro;
}

int main(){

    int n = 5;
    vector <int> input(n), output(n);
    input = {2, 1, 2, 1, 2};
    cout << "OUTPUT\n";
    output = findMaxProduct(input);
    for (int i = 0; i < n; i++){
        cout << output[i] << endl;
    }

    return 0;
}

