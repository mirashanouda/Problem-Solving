#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std; 

int main() {

	string nk;
	getline(cin, nk); //to get a sting of n and k

	vector<int> nkList;//to contain n and k as numbers
	istringstream iss(nk);//converting string to int
	int temp;
	while (iss >> temp && temp <=50) {
		nkList.push_back(temp);//list of int
	}


	string score;
	getline(cin, score);
	vector<int> scores;
	istringstream s(score);//converting string to int
	int temp1;
	while (s >> temp1) {
		scores.push_back(temp1);//list of int
	}

	int count = 0;
	for (int i = 0; i < scores.size(); i++) {
		if (scores[i] >= scores[nkList[1]-1] && scores[i] != 0)
			count++;
		else continue;
	}

	cout << count << endl;
	//system("pause");
	return 0;

}