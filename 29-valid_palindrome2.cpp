
#include <iostream>
#include <map>
#include <vector>
using namespace std; 

bool isPalindrome(string s, int st, int end) {
        string test; 
        for (int i = st; i <= end; i++){
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

bool validPalindrome(string s) {
        
        if(s.size() == 0 || s.size() == 1)
            return true;

        int p1 = 0, p2 = s.size() - 1;
        //int edge = 0; 
        while(p1 < p2){
            //abc
            if(s[p1] != s[p2])
                return isPalindrome(s, p1 + 1, p2) || isPalindrome(s, p1, p2 - 1);
        //        //cout << "entered - " << s << "," << s[p1] << "+"<< s[p2] << ".." << endl;
        //        if (edge == 1){
        //            return false;
        //        }
        //        else {
        //            edge++;
        //            s.erase(s.begin() + p1);
        //            p2--;
        //            //cout << s << endl;
        //            continue;
        //        }
        //    }

            p1++;
            p2--;
        } 
        return true;

}


int main() {

    cout << validPalindrome("beeee") << endl;
    return 0;
}


