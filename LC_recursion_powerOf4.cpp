/*
Given an integer n, return true if it is a power of four. Otherwise, return false.

An integer n is a power of four, if there exists an integer x such that n == 4x.
*/

#include <bits/stdc++.h>
using namespace std;

bool isPower(int num, int power){
    if(pow(4,power) == num)
        return true;
    else if(pow(4,power) > num)
        return false;
    else 
        return isPower(num, ++power);
}

bool isPowerOfFour(int n) {
    
    return isPower(n, 0);
}
int main(){

    cout << isPowerOfFour(6) << endl;
    return 0;
}