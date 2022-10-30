#include <bits/stdc++.h>
using namespace std;


void hights(vector<int> arr, int n ,int qu){
    int l = 0,
        r = n - 1,
        mid,
        small = INT_MIN,
        big = INT_MAX;

    while (l <= r){
        mid = l + (r-l)/2;
        if(arr[mid] == qu){
            //cout << ((mid - 1) >=0 ? to_string(arr[mid - 1]): "X") << " " << ((mid + 1) < n ? to_string(arr[mid + 1]): "X") << "\n";
            //return;
            r = mid + 1;
        }
        if(arr[mid] < qu){
            //cout << "small before" << small << endl;
            small = max(small, arr[mid]);
            if (small == qu)
                small = arr[mid - 1];
            //cout << "small after" << small << endl;
            l = mid + 1;
        }
        else {
            //cout << "big before" << big << endl;
            big = min(big, arr[mid]);
            if (big == qu)
                big = arr[mid + 1];
            //cout << "big after" << big << endl;
            r = mid - 1;
        }
    }

    //cout << mid << " " << small << " " << big << endl; 
    //if(small == INT_MAX)  cout << "X"; else if (small == qu) cout << ((mid - 1) >= 0 ? to_string(arr[mid - 1]):"X"); else cout << small;
    //cout << " "; 
    if(big == INT_MIN)  cout << "X"; else if (big == qu) cout << ((mid + 1) < n ? to_string(arr[mid + 1]):"X"); else cout << big;
    cout << endl;
    
    //cout << small << " " << big << "\n";
    //cout << ((small == INT_MIN)? "X": to_string(small)) << " " << ((big == INT_MAX) ? "X": to_string(big)) << "\n";
    //return;
}

int main(){

    int n; 
    cin >> n;
    vector<int> arr(n); 

    for(int i = 0; i < n; ++i)
        cin >> arr[i];
    
    int qu; 
    cin >> qu;
    vector<int> q(qu);

    for(int i = 0; i < qu; ++i)
        cin >> q[i];
    
    //edge cases: n = 1, 2
    for(int i = 0; i < qu; ++i){
        hights(arr, n, q[i]);
    }

    return 0; 
}