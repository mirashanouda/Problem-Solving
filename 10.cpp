#include <iostream>
#include <vector>
using namespace std;

int takeStones(int n, string s) {
	int count = 0;
	for (int i = 0; i < n -1; i++) {
		if (s[i] == s[i + 1])
			count++;
	}
	return count;
}

int main() {

	int n; string s;
	cin >> n;
	cin >> s;
	cout << takeStones(n, s)<< endl;
	return 0;
}
