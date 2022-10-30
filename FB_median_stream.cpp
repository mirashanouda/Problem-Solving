/*
You must compute a list output[0..(n-1)] such that, for each index i, output[i] is equal 
to the median of the elements arr[0..i] (rounded down to the nearest integer).
The median of a list of integers is defined as follows. 
If the integers were to be sorted, then:
If there are an odd number of integers, then the median is equal to the middle integer 
in the sorted order.
Otherwise, if there are an even number of integers, then the median is equal to the 
average of the two middle-most integers in the sorted order.
*/

#include <iostream>
#include <algorithm>
#include <vector> 
using namespace std; 


vector <int> findMedian(vector <int> arr) {
    vector <int> out;
    vector <int> store; //to store 
    int n;  
    for (int i = 0; i < arr.size(); i++){
        store.push_back(arr[i]);
        sort(store.begin(), store.end()); //sorting
        n = store.size();
        if (n % 2 == 0) //even
            out.push_back((store[n/2] + store[n/2 - 1])/2); //avrg
        else //odd
            out.push_back(store[n/2]); //avrg
    }
    return out;
}

int main(){

    int n = 2;
    vector <int> input(n), output(n);
    input = {1 ,2};
    cout << "OUTPUT\n";
    output = findMedian(input);
    for (int i = 0; i < n; i++){
        cout << output[i] << endl;
    }

    return 0;
}