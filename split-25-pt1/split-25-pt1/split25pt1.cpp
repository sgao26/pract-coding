// https://edabit.com/challenge/PbtMHCLm83NwqSnnS
// level: very hard

#include <iostream>
#include <cmath>
using namespace std;

int split(int num) {
	int threes = num / 3;
	int lastint = num % 3;
	if (lastint == 1) {
		threes--;
		lastint += 3;
	}
	if (lastint == 0) {
		return pow(3, threes);
	}

	return pow(3, threes) * lastint;
}

// saw a better solution:
/*
int split(int n) {
    if (n < 5) {
        return n;
    }
    else {
        return 3 * split(n - 3);
    }
}
*/

int main() {
    int passed = 0;
    int total = 0;

    // Test 1
    total++;
    if (split(25) == 8748) {
        passed++;
        cout << "Test 1 passed successfully!" << endl;
    }
    else {
        cout << "Test 1 failed." << endl;
    }

    // Test 2
    total++;
    if (split(1) == 1) {
        passed++;
        cout << "Test 2 passed successfully!" << endl;
    }
    else {
        cout << "Test 2 failed." << endl;
    }

    // Test 3
    total++;
    if (split(10) == 36) {
        passed++;
        cout << "Test 3 passed successfully!" << endl;
    }
    else {
        cout << "Test 3 failed." << endl;
    }

    // Test 4
    total++;
    if (split(5) == 6) {
        passed++;
        cout << "Test 4 passed successfully!" << endl;
    }
    else {
        cout << "Test 4 failed." << endl;
    }

    // Test 5
    total++;
    if (split(15) == 243) {
        passed++;
        cout << "Test 5 passed successfully!" << endl;
    }
    else {
        cout << "Test 5 failed." << endl;
    }

    // Test 6
    total++;
    if (split(20) == 1458) {
        passed++;
        cout << "Test 6 passed successfully!" << endl;
    }
    else {
        cout << "Test 6 failed." << endl;
    }

    cout << "Passed " << passed << " out of " << total << " tests." << endl;

    return 0;
}