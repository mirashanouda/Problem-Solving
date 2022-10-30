#include <iostream>
#include <vector>
#include <string>
using namespace std;

    int reverse1(int x) {
    bool flag = false;
    if (x < 0) {
        flag = true;
        x = x * -1;
    }

    string s;
    //s = to_string(x);
    int size = s.size();
    for (int i = size - 1; i >= 0; i--) {
        s.push_back(s[i]);
        s.erase(s.begin() + i);
    }
    int newx;
    //newx = stoi(s);
    if (flag)
        newx = newx * -1;
    return newx;
}

int reverse2 (int x) {
    int bit = 0,
        rev = 0;
    while (x != 0){
        bit = x % 10;
        x /= 10;

        if (rev > INT_MAX/10 || (rev == INT_MAX/10 && bit == 7)) return 0;
        if (rev < INT_MIN/10 || (rev == INT_MIN/10 && bit == -8)) return 0;

        rev = rev * 10 + bit;
    }
    return rev;

}

int main() {

	cout << reverse2(-123) << endl;
	return 0;
}
