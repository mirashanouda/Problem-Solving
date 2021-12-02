//find the longest common prefix string amongst an array of strings


#include <iostream>
#include <vector>
//#include <bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string lcp = ""; //longest common prefix
    int n = strs.size();
    if (n == 0)
        return "";

    lcp = strs[0];
    for (int i = 1; i < n; i++) {
        if (lcp == "")
            return lcp;

        //if my string is less than my old prefix
        if (strs[i].size() < lcp.size()) {
            string lcp1 = ""; //a new lcp 
            for (int j = 0; j < int(strs[i].size()); j++) {
                if (strs[i][j] == lcp[j]) {
                    lcp1.push_back(strs[i][j]);
                }
                else break;
            }
            lcp = lcp1;
        }
        else {
            string lcp2 = "";
            for (int j = 0; j < int(lcp.size()); j++) {
                if (strs[i][j] == lcp[j]) {
                    lcp2.push_back(strs[i][j]);
                }
                else break;
            }
            lcp = lcp2;
        }
    }
    return lcp;
}

int main()
{
    vector<string> strs;
    strs.push_back("dog");
    strs.push_back("flow");
    strs.push_back("flight");
    
    /* sort(strs.begin(), strs.begin());
    for (int i =0; i < strs.size(); i++){
        cout << strs[i] << endl;
    } */
    cout << longestCommonPrefix(strs) << endl;
    return 0;
}
