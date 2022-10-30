/*
Ternary numeric notation. To telegraph the ternary number the Borze alphabet is used. 
Digit 0 is transmitted as «.», 1 as «-.» and 2 as «--». You are to decode the Borze code, 
i.e. to find out the ternary number given its representation in Borze alphabet.

Input
The first line contains a number in Borze code. The length of the string is between 1 and 200 characters.
It's guaranteed that the given string is a valid Borze code of some ternary number 
(this number can have leading zeroes).

Output
Output the decoded ternary number. It can have leading zeroes.

0 --> . 
1 --> -. 
2 --> --

*/
#include <iostream> 
#include <vector> 
#include <string> 
using namespace std; 

string getNum(string code){
    if (code.length() == 1)
        return "0";

    int i = 0;
    string broze;

    while(i < code.size()){
        if(code[i] == '.'){
            broze.push_back('0');
            i++;
        }
        else if (code[i] == '-'){
            if(code[i+1]== '.')
                broze.push_back('1');
            if (code[i+1]== '-')
                broze.push_back('2');
            
            i += 2;
        }
    } 

    return broze;
}
int main(){

    string s; 
    cin >> s; 
    cout << getNum(s) << endl;
    return 0; 
}