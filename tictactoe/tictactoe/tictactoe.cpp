// https://edabit.com/challenge/rscwis53jKokoKRYo
// level: very hard


#include <vector>
#include <iostream>
using namespace std;

string playerWin(const vector<vector<char>> inputs)
{
	// diagonals
	if (inputs[0][0] == inputs[1][1] && inputs[0][0] == inputs[2][2]) {
		if (inputs[1][1] == 'X') {
			return "Player 1 wins";
		}
		if (inputs[1][1] == 'O') {
			return "Player 2 wins";
		}
		else {
			return "It's a Tie";
		}
	}
	if (inputs[0][2] == inputs[1][1] && inputs[0][2] == inputs[2][0]) {
		if (inputs[1][1] == 'X') {
			return "Player 1 wins";
		}
		if (inputs[1][1] == 'O') {
			return "Player 2 wins";
		}
		else {
			return "It's a Tie";
		}
	}
	for (int i{ 0 }; i < 3; ++i)
	{
		if (inputs[i][0] == inputs[i][1] && inputs[i][0] == inputs[i][2]){
			if (inputs[i][0] == 'X') {
				return "Player 1 wins";
			}
			if (inputs[i][0] == 'O') {
				return "Player 2 wins";
			}
			else {
				return "It's a Tie";
			}
		}
	}
	for (int j{ 0 }; j < 3; ++j)
	{
		if (inputs[0][j] == inputs[1][j] && inputs[0][j] == inputs[2][j])
		{
			if (inputs[0][j] == 'X') {
				return "Player 1 wins";
			}
			if (inputs[0][j] == 'O') {
				return "Player 2 wins";
			}
			else {
				return "It's a Tie";
			}
		}
	}
	return "It's a Tie";
}

void assertEqual(const string& result, const string& expected) {
	if (result == expected) {
		cout << "Pass" << endl;
	}
	else {
		cout << "Fail" << endl;
		cout << "Expected: " << expected << endl;
		cout << "Actual: " << result << endl;
	}
}
int main() {
	vector<vector<char>> board1 = {
		{'X', 'O', 'O'},
		{'O', 'X', 'O'},
		{'O', '#', 'X'}
	};
	assertEqual(playerWin(board1), "Player 1 wins");

	vector<vector<char>> board2 = {
		{'X', 'O', 'O'},
		{'O', 'X', 'O'},
		{'O', '#', 'O'}
	};
	assertEqual(playerWin(board2), "Player 2 wins");

	vector<vector<char>> board3 = {
		{'X', 'O', 'O'},
		{'O', 'X', 'O'},
		{'O', 'O', '#'}
	};
	assertEqual(playerWin(board3), "It's a Tie");

	return 0;
}