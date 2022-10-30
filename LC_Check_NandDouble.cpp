/*
Given an array arr of integers, check if there exists two integers N and M such that N is the double of M ( i.e. N = 2 * M).

More formally check if there exists two indices i and j such that :
i != j
0 <= i, j < arr.length
arr[i] == 2 * arr[j]
*/

#include <iostream>
#include <vector>
#include<map>
using namespace std;
//sensetive edge cases: 
bool checkIfExist(vector<int>& arr) {
    map<int, int> mymap; 
    
    //doubling all elements:
    for(int i = 0; i < int(arr.size()); i++){
        mymap[arr[i] * 2]++;
    }
    
    //2 pointers 
    //[-2,0,10,-19,4,6,-8]
    //my map: -4,0,20,-38,8,12,-16
    
    //[3,1,7,11]
    //my map: 6,2,14,22
    for(int i = 0; i < int(arr.size()); i++){
        if (arr[i] == 0 && mymap[0] > 1) //multiple 0s
            return true;
        if(mymap[arr[i]] > 0 && arr[i] != 0) //exist 
            return true;
    }
    
    return false;
    
}

int main(){
    vector<int> arr = {-2,0,10,-19,4,6,-8};
    cout<<checkIfExist(arr)<<endl;
    return 0; 
}