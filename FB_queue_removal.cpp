/*
You're given a list of n integers arr, which represent elements in a queue (in order from front to back). 
You're also given an integer x, and must perform x iterations of the following 3-step process:
- Pop x elements from the front of queue (or, if it contains fewer than x elements, pop all of them)
- Of the elements that were popped, find the one with the largest value (if there are multiple such elements, 
    take the one which had been popped the earliest), 
    and remove it 
- For each one of the remaining elements that were popped (in the order they had been popped), 
    decrement its value by 1 if it's positive (otherwise, if its value is 0, then it's left unchanged), and then add it back to the queue

Compute a list of x integers output, the ith of which is the 1-based index in the original array of the element which 
had been removed in step 2 during the ith iteration.
*/

#include <iostream>
#include <algorithm>
#include <vector> 
using namespace std; 


vector <int> findPositions(vector <int> arr, int x) {
  // Write your code here
  
  return {};
}

int main(){

    int n = 2, x;
    vector <int> input(n), output;
    input = {1 ,2};
    cout << "\nOUTPUT\n";
    output = findPositions(input, x);
    for (int i = 0; i < n; i++){
        cout << output[i] << endl;
    }

    return 0;
}