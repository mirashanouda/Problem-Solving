//minimum number of operations

#include <iostream>
#include <vector>
//#include <map>
//#include <pair>
using namespace std;

int main() {

    string s;
    int n, k, t;

    //map<int, int> cases;
    vector<pair<int, int>> cases;
    vector<string> words;

    cin >> t;
    for (int i = 0; i < t; i++) {
        //n , k
        //s 
        cin >> n >> k;
        cin >> s;//arr of n
        //cases.insert(make_pair(n, k));
        cases.push_back(make_pair(n, k));
        words.push_back(s);
    }

    cout << "results" << endl;
    int p1, p2, count, oper;
    vector<int> y;

    for (int i = 0; i < words.size(); i++) {
        count = 0;
        p1 = 0; p2 = cases[i].first - 1;
        while (p1 < p2) {
            if (words[i][p1] != words[i][p2])
                count++;
            p1++; p2--;
        }

        if (count == cases[i].second)
            oper = 0;
        else
            oper = abs(cases[i].second - count);

        y.push_back(oper);
    }

    for (int i = 0; i < t; i++) {
        cout << "Case #" << i + 1 << ": " << y[i] << endl;
    }
    system("pause");
    return 0;
}

/*
out:
    //Case #x: y --> x from 1

//ABGHKPBA --> 2 -- 3
*/
