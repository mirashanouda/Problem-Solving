/*
If the difference between the grade and the next multiple of 5 is less than 3, round grade up to the next 
multiple of 5.

if less than 40. 
if less than 38 no rounding 

next = grade - (grade % 5) + 5
*/

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std; 

void gradingStudents (vector<int>& g){
    int next;

    for (int i = 0; i < g.size(); i++){
        if (g[i] < 38)
            continue;

        next = g[i] - (g[i] % 5) + 5;
        if ((next - g[i]) < 3)
            g[i] = next;
    }
}

int main (){

    int n;
    cin >> n; 
    vector <int> grades(n);

    for (int i = 0; i < n; i++){
        cin >> grades[i];
    }

    gradingStudents(grades);
    for (int i = 0; i < n; i++){
        cout << grades[i] << endl;
    }
    return 0;
}