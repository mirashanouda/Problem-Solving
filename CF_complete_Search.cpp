/*
Everybody knows that positive integers are lucky if their decimal representation doesn't contain digits 
other than 4 and 7. 
For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Lucky number is super lucky if it's decimal representation contains equal amount of digits 4 and 7. 
For example, numbers 47, 7744, 474477 are super lucky and 4, 744, 467 are not.
One day Petya came across a positive integer n. Help him to find the least super lucky number which is not less than n.

Input
The only line contains a positive integer n (1 ≤ n ≤ 109). This number doesn't have leading zeroes.

Output
Output the least super lucky number that is more than or equal to n.
*/

#include <iostream>
#include <string>
using namespace std; 

string Find_Super_Lucky(int n){
    string s = to_string(n);
    string r = "";
    int count4 = 0, count7 = 0;

    for (int i = 0; i < s.size(); i++){
        if(int(s[i]) <= int('4')){
            count4++;
            r += "4";
            continue;
        }
        else if(int(s[i]) <= int('7')){
            count7++;
            r += "7";
            continue;
        }
    }
    if(count4 == count7)
        return r;
    else {
        //I should also check if what Iam doing does not make my new r < n
        for (int i = r.size(); (i >= 0 && count4 != count7 && stoi(r) > n); i--){
            if(count4 > count7 && r[i] == '4'){
                r[i] = '7';
                count7++;
                count4--;
            }
            else if(count4 < count7 && r[i] == '7')
            {
                r[i] = '4';
                count7--;
                count4++;
            }
        }
        return r;
    }
}

int main(){
    int n; 
    cin >> n; 
    cout << Find_Super_Lucky(n) << endl; 
    return 0;
}