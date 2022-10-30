
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
//#include <map>
//#include <pair>
using namespace std;

bool isAnagram(string a, string b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[i])
            return false;
    }
    return true;
}
int main() {
    //shuffled  s[i] != a[i]

    int t; cin >> t; //test cases
    vector<string> words, out;

    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        words.push_back(s);

    }
    
    out = words;
    for (int i = 0; i < t; i++) {
        /*int p1 = 0, p2 = 1;
        while (p1<p2) {
            if (out[i][p1] != out[i][p2]) {
                swap(words[i][p1], words[i][p2]);
                p1 = p2 + 1;
                p2++;
            }
            else
                p2;
        }
        if (out[i][p1] == words[i][p1]) {

        }*/

        int n = out[i].size();
        while (n >= 0) {
            out[i].push_back(out[i][0]);
            out[i].erase(out[i].begin());
            if (isAnagram(out[i], words[i]))
                break;
            n--;
        }
        if (!isAnagram(out[i], words[i])) 
        {
            out[i] = "IMPOSSIBLE";
        }
        
    }

    for (int i = 0; i < out.size(); i++) {
        cout << "Case #" << i + 1 << ": " << out[i] << endl;
    }

    
    
    //tssaa 0
    //ssaat 1 
    //saats 2

 
    system("pause");
    return 0;
}

/*
out:
    //Case #x: y --> x from 1

//ABGHKPBA --> 2 -- 3
*/



///--------------------------------------------------------------


#include <iostream>
#include <vector>
//#include <algorithm>
//#include <string>
//#include <map>
//#include <pair>
using namespace std;
#define n 100

bool isEdge(int r, int c, vector<int> d, int index) {
    if(int)
}
int main() {
    
    //filled rec
    //limit k
    int t; cin >> t; //test cases

    //const int n = t;
    vector<int> r(t), c(t), k(t), d;
    int d1, d2, d3, d4;

    int r[n], c[n], k[n], dim[n];
    for (int i = 0; i < t; i++) {
        cin >> r[i] >> c[i] >> k[i];
        cin >> d1 >> d2 >> d3 >> d4;
        d.push_back(d1);
        d.push_back(d2);
        d.push_back(d3);
        d.push_back(d4);
    }

    for (int i = 0; i < t; i++) {
        //int start;
        if (d[i] < d[i + 1]) {
            //r < c
            //start with col

        }
        else {

        }
            
    }

    system("pause");
    return 0;
}
