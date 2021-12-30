/*
When you encrypt a string S, you start with an initially-empty resulting string R and append characters 
to it as follows:
Append the middle character of S (if S has even length, then we define the middle character as the 
    left-most of the two central characters)
Append the encrypted version of the substring of S that's to the left of the middle character (if non-empty)
Append the encrypted version of the substring of S that's to the right of the middle character (if non-empty)
For example, to encrypt the string "abc", we first take "b", and then append the encrypted 
version of "a" (which is just "a") and the encrypted version of "c" (which is just "c") to get "bac".
If we encrypt "abcxcba" we'll get "xbacbca". That is, we take "x" and then append the encrypted 
version "abc" and then append the encrypted version of "cba".

Input
S contains only lower-case alphabetic characters
1 <= |S| <= 10,000
Output
Return string R, the encrypted version of S.
Example 1
S = "abc"
R = "bac"
*/

#include<bits/stdc++.h>
using namespace std; 

char encrypt(string s, int s, int e){
    string r;
    if(start >= end)
      return s[start];
    else {
      return encrypt(s, )
    }
}

string findEncryptedWord(string s) {
  string R;
  int m = s.size()/2;
  R.push_back(s[m]); 

  //string s1 = encrypt(s, 0, m - 1);
  //string s2 = encrypt(s, m, s.size() - 1);
  //R = s[m] + s2 + s2;
}

int main(){

}