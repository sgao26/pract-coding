// https://edabit.com/challenge/qeCS48GXtK9NJLc9C
// level: hard


#include <iostream>
#include <vector>
using namespace std;

int sharedLetters(string str1, string str2) {
	vector<int> string1;
	for (char c : str1) {
		if (count(string1.begin(), string1.end(), c) == 0) {
			string1.push_back(c);
		}
	}
	int countLetter = 0;
	for (char c : str2) {
		if (count(string1.begin(), string1.end(), c) != 0) {
			countLetter++;
			int pos = 0;
			for (char a : string1) {
				if (a == c) {
					string1.erase(string1.begin() + pos);
				}
				pos++;
			}
		}
	}
	return countLetter;
}

bool testSharedLetters(const string& testName, const string& str1, const string& str2, int expected) {
	int result = sharedLetters(str1, str2);
	if (result == expected) {
		cout << testName << " - Passed" << endl;
		return true;
	}
	else {
		cout << testName << " - Failed: Expected " << expected << ", but got " << result << endl;
		return false;
	}
}

int main() {
	bool allTestsPassed = true;

	allTestsPassed &= testSharedLetters("Test 1", "apple", "meaty", 2);
	allTestsPassed &= testSharedLetters("Test 2", "fan", "forsook", 1);
	allTestsPassed &= testSharedLetters("Test 3", "spout", "shout", 4);
	allTestsPassed &= testSharedLetters("Test 4", "took", "taken", 2);
	allTestsPassed &= testSharedLetters("Test 5", "mentor", "terminal", 5);
	allTestsPassed &= testSharedLetters("Test 6", "class", "last", 3);

	if (allTestsPassed) {
		cout << "All tests passed!" << endl;
	}
	else {
		cout << "Some tests failed!" << endl;
	}

	return 0;
}