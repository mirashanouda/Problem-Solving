#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std; 

int main() {

	//a<=b
	//3a, 2b

	string w;
	getline(cin, w);

	vector<int> ab;
	istringstream push(w);
	int temp;
	while (push >> temp) {
		ab.push_back(temp); // a then b
	}

	int years = 0;
	while (ab[0] <= ab[1]) {
		years++;
		ab[0] *= 3;
		ab[1] *= 2;
	}

	cout << years << endl;
	//system("pause");
	return 0;

}