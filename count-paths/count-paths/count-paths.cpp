#include <iostream>
using namespace std;

int paths(int x, int y) {
	if (x == 0 || y == 0) {
		return 1;
	}
	else {
		return paths(x - 1, y) + paths(x, y - 1);
	}
}

int main() {
    int result;

    // Test 1
    result = paths(0, 0);
    if (result == 1) {
        cout << "Test 1 passed successfully" << endl;
    }
    else {
        cout << "Test 1 failed. Expected: 1, Actual: " << result << endl;
    }

    // Test 2
    result = paths(2, 1);
    if (result == 3) {
        cout << "Test 2 passed successfully" << endl;
    }
    else {
        cout << "Test 2 failed. Expected: 3, Actual: " << result << endl;
    }

    // Test 3
    result = paths(2, 2);
    if (result == 6) {
        cout << "Test 3 passed successfully" << endl;
    }
    else {
        cout << "Test 3 failed. Expected: 6, Actual: " << result << endl;
    }

    // Test 4
    result = paths(6, 9);
    if (result == 5005) {
        cout << "Test 4 passed successfully" << endl;
    }
    else {
        cout << "Test 4 failed. Expected: 5005, Actual: " << result << endl;
    }

    // Test 5
    result = paths(0, 8);
    if (result == 1) {
        cout << "Test 5 passed successfully" << endl;
    }
    else {
        cout << "Test 5 failed. Expected: 1, Actual: " << result << endl;
    }

    // Test 6
    result = paths(7, 0);
    if (result == 1) {
        cout << "Test 6 passed successfully" << endl;
    }
    else {
        cout << "Test 6 failed. Expected: 1, Actual: " << result << endl;
    }

    // Test 7
    result = paths(1, 99);
    if (result == 100) {
        cout << "Test 7 passed successfully" << endl;
    }
    else {
        cout << "Test 7 failed. Expected: 100, Actual: " << result << endl;
    }

    return 0;
}