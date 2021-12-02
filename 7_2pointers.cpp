/*
Sereja and Dima play a game. The rules of the game are very simple. The players have n cards in a row. 
Each card contains a number, all numbers on the cards are distinct. The players take turns, Sereja moves first. 
During his turn a player can take one card: either the leftmost card in a row, or the rightmost one. The game ends when there is no more cards.
The player who has the maximum sum of numbers on his cards by the end of the game, wins.

Sereja and Dima are being greedy. Each of them chooses the card with the larger number during his move.
Inna is a friend of Sereja and Dima. She knows which strategy the guys are using, so she wants to determine the final score, 
given the initial state of the game. Help her.



Input
The first line contains integer n (1 ≤ n ≤ 1000) — the number of cards on the table. 
The second line contains space-separated numbers on the cards from left to right. 
The numbers on the cards are distinct integers from 1 to 1000.

Output
On a single line, print two integers. The first number is the number of Sereja's points at the end of the game, 
the second number is the number of Dima's points at the end of the game.
*/
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std; 

int main() {

	//n cards 
	//ser first 
	//leftmost or rightmost
	//ends when no cards
	//max sum -> wins

	int n; cin >> n;
	cin.ignore();
	string c;
	getline(cin, c);
	istringstream cc(c);
	vector<int> cards;
	int temp;
	while (cc >> temp) {
		cards.push_back(temp);
	}

	int ser = 0, dima = 0;
	int p = 0, q = n - 1;

	bool turn = true;
	while (p < q) {
		//int add = ? cards[p] : cards[q];
		if (cards[p] > cards[q]) {
			if (turn)
				ser += cards[p];
			else
				dima += cards[p];
			p++;
		}
		else {
			if (turn)
				ser += cards[q];
			else
				dima += cards[q];
			q--;
		}
		//alternating the turns 
		if (turn) 
			turn = 0;
		else 
			turn = 1;

	}

	if (turn)
		ser += cards[p];
	else
		dima += cards[p];
	
	
	//while 
	//	(!cards.empty()) {
	//	int last = cards.size() - 1; //the last index
	//	if (cards[0] > cards[last]) {
	//		ser = ser + cards[0];
	//		cards.erase(cards.begin());
	//	}
	//	else {
	//		ser = ser + cards[last];
	//		cards.erase(cards.end() -1);
	//		//cards.pop_back();
	//	}

	//	if (cards[0] > cards[last]) {
	//		dima = dima + cards[0];
	//		cards.erase(cards.begin());
	//	}
	//	else {
	//		dima = dima + cards[last];
	//		cards.erase(cards.end()-1);
	//		//cards.pop_back();
	//	}
	//}

	printf("%d %d\n", ser, dima);
	//system("pause");
	return 0;

}