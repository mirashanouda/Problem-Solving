#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std; 

int main() {

	//the amounts of cubes in each of the n columns after the gravity switch!
	int n;
	cin >> n;
	

	string col;
	cin.ignore();
	getline(cin, col);

	istringstream cc (col);
	int temp;
	vector<int> colums;
	while (cc >> temp) {
		colums.push_back(temp);
	}

	sort(colums.begin(), colums.end());

	for (int i = 0; i < n; i++) {
		cout << colums[i] << ' ';
	}
	cout << endl;
	
	//system("pause");
	return 0;

}