/*
He calls the median letter in a word the letter which is in the middle of the word. If the word's 
length is even --> left of the two middle letters. 
If the word consists of single letter, then according to above definition this letter is the median letter.

odd = len/2
even= len/2 - 1

Polycarp encodes each word in the following way: he writes down the median letter of the word, 
then deletes it and repeats the process until there are no letters left. For example, he encodes the word 
volga as logva.

logva
even: before 
odd: after 

31100
volga

Input
The first line contains a positive integer n (1 ≤ n ≤ 2000) — the length of the encoded word.

The second line contains the string s of length n consisting of lowercase English letters — the encoding.

Output
Print the word that Polycarp encoded.
*/

#include <iostream>
#include <map>
using namespace std; 

string decode(string s, int n){
    string r = s;
    int index;
    //map<char, int> code;
    for(int i = 0; i<n; i++){
        if( (n - i) % 2 == 1){//odd
            if(index == (n-i)/2) //repeated
                index = (n-i)/2 + n/2; 
            else index = ((n-i)/2 >= 0) ? ((n-i)/2): 0;
            r[index] = s[i];
            cout << "i = " << i << ", index = " << index << ", word: " << r <<endl;
        }
        else {//even
            if(index == (n-i)/2 - 1) //repeated
                index = index + n/2; 
            else index = ((n-i)/2 - 1 >= 0) ? ((n-i)/2 - 1): 0; 
            r[index] = s[i];
            cout << "i = " << i << ", index = " << index << ", word: " << r <<endl;
        }
    }
    return r; 
}
int main(){

    cout << decode("logva", 5) << endl;
    return 0;
}