#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int romanToInt(string s) {
        unordered_map<char, int> roman;
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;

        //converting the input to all upper casses
        string ss = "";
        for (int i = 0; i < s.size(); i++){
            ss.push_back(toupper(s[i]));
        }

        int num = 0;

        //M CM XCIV
        while (!ss.empty()){
            //one letter left
            if (ss.size() == 1)
                return num + roman[ss[0]];

            //special cases
            if (roman[ss[0]] < roman[ss[1]]){
                num = num + (roman[ss[1]] - roman[ss[0]]);
                ss.erase(ss.begin() + 1);
            }
            //normal cases
            else{
                num = num + roman[ss[0]];
            }

            ss.erase(ss.begin());
            }
        return num;//55+1+1
    }

int main(){

    cout << romanToInt("MCMXCIV") << endl;

    return 0;

}
