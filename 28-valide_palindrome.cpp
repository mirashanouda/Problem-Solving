
#include <iostream>
#include <map>
#include <vector>
using namespace std; 

bool isPalindrome(string s) {
        string test; 
        for (int i = 0; i < s.size(); i++){
            if(int(tolower(s[i])) < int('a') || int(tolower(s[i])) > int('z'))
                continue;
            test.push_back(tolower(s[i]));
        }

        for (int i = 0; i < test.size(); i++){
            cout << test[i] << endl; 
        }

        if (test.size() == 0 || test.size() == 1)
            return true;
        
        int p1 = 0, p2 = test.size() - 1;
        while(p1 < p2){
            
            if(test[p1] != test[p2])
                return false;
            
            p1++;
            p2--;
        } 
        return true;
}
int main(){

    cout << isPalindrome("0P") << endl;
    return 0;
}

