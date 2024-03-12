// https://edabit.com/challenge/98tt3RfDYBPCzpJi2
// level: hard


#include <iostream>
#include <vector>
using namespace std;

bool overTwentyOne(vector<char> cards) {
	int sum = 0;
	for (char c : cards) {
		if (isdigit(c)) {
			sum += int(c - '0');
		}
		else if (c == 'A') {
			sum += 1;
		}
		else {
			sum += 10;
		}
	}

	if (sum <= 21) {
		return false;
	}
	else {
		return true;
	}
}
int main() {
    vector<vector<char>> testCases = {
        {'A', '2', '3'},
        {'A', 'J', 'K'},
        {'A', 'J', 'K', 'Q'},
        {'5', '3', '6', '6', '7', '9'}
    };

    bool expectedResults[] = { false, false, true, true };
    int numTests = sizeof(expectedResults) / sizeof(expectedResults[0]);
    int passed = 0;

    for (int i = 0; i < numTests; ++i) {
        bool result = overTwentyOne(testCases[i]);
        if (result == expectedResults[i]) {
            cout << "Test " << (i + 1) << ": Passed\n";
            passed++;
        }
        else {
            cout << "Test " << (i + 1) << ": Failed\n";
        }
    }

    cout << "Passed " << passed << " out of " << numTests << " tests.\n";

    return 0;
}
