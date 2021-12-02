/*
The first line contains two integers n and m. 
The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 105) — 
the array elements.

Next m lines contain integers l1, l2, ..., lm. The i-th line contains integer li (1 ≤ li ≤ n).
*/

#include <iostream>
#include <map>
#include <vector>
using namespace std; 

vector <int>  solution(int n, int m, vector <int> a, vector <int> l){
    vector <int> result; 
    int count = 0;
    map <int, int> check; //map for a accurance of distinct elements for every element in a. 
    for (int i = 0; i < m; i++){
        //map: count
        check = {{0,0}}; 
        count = 0;

        for (int j = l[i] - 1; j < n; j++){
            if(check[a[j]] == 0){//not found 
                count++;
                check[a[j]]++;
            }
            else 
                check[a[j]]++;

        }
        result.push_back(count);
    }
    return result;     

}
int main (){

    int n, m; 
    vector <int> a(n), l(m);
    cin >> n >> m;
    
    for (int i = 0; i < n; i++){
        cin >> a[i]; 
    }

    for (int i = 0; i < m; i++){
        cin >> l[i]; 
    }

    vector <int>   out = solution(n,m,a,l); 
    //cout << "output" <<endl;

    for (int i = 0; i < m; i++){
        cout<< out[i] <<endl; 
    }
    return 0;
}
