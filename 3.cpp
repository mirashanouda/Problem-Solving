//at leadst 2
//find the number of prob form n

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

    int prob;
    cin >> prob;
    vector<string> status;
    while (prob >= 0) {
        string x;
        getline(cin, x);
        status.push_back(x);

        prob--;
    }

    int count = 0;
    int n = 0;

    for (int i = 0; i < status.size(); i++) {
        for (int j = 0; j < status[i].size(); j++) {
            if (status[i][j] == ' ' || status[i][j] == '0') {
                continue;
            }
            else if (status[i][j] == '1')
                count++;
        }
        if (count >= 2) {
            n++;
        }
        count = 0;
    }


    cout << n << endl;

    //system("pause"); //avoid using this line in submission
    return 0;
}