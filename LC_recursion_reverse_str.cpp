/*
Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.
*/

#include<bits/stdc++.h>
using namespace std; 

void reverseRecursion(vector<char>& s, int left, int right) {
    if (left >= right)
        return;
    
    swap(s[left], s[right]);
    reverseRecursion(s, ++left, --right);
}

void reverseString(vector<char>& s){
    return reverseRecursion(s, 0, s.size()-1);
}

int main(){
    vector<char> s = {'M','i','r','a'};
    reverseString(s);
    for (auto c : s)
        cout << c << " ";
    cout << endl; 
    return 0; 
}