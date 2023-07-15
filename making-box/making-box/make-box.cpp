// https://edabit.com/challenge/yHeTBuJ6LDw3nhA7k
// level: hard


#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> makeBox(int n) {
	vector<string> result;
	if (n == 1) {
		result.push_back("#");
		return result;
	}
	string topbot = "";
	string mid = "";
	for (int i = 1; i <= n; i++) {
		topbot += '#';
		if (i == 1 || i == n) {
			mid += '#';
		}
		else {
			mid += ' ';
		}
	}
	result.push_back(topbot);
	for (int i = 1; i <= n - 2; i++) {
		result.push_back(mid);
	}
	result.push_back(topbot);
	return result;
}
void testMakeBox(const vector<string>& output, const vector<string>& expected) {
	if (output == expected) {
		cout << "Test Passed" << endl;
	}
	else {
		cout << "Test Failed" << endl;
		cout << "Expected Output:" << endl;
		for (const string& line : expected) {
			cout << line << endl;
		}
		cout << "Actual Output:" << endl;
		for (const string& line : output) {
			cout << line << endl;
		}
	}
}
int main() {
    vector<string> output;
    vector<string> expected;

    // Test Case 1
    output = makeBox(5);
    expected = {
        "#####",
        "#   #",
        "#   #",
        "#   #",
        "#####"
    };
    testMakeBox(output, expected);

    // Test Case 2
    output = makeBox(6);
    expected = {
        "######",
        "#    #",
        "#    #",
        "#    #",
        "#    #",
        "######"
    };
    testMakeBox(output, expected);

    // Test Case 3
    output = makeBox(4);
    expected = {
        "####",
        "#  #",
        "#  #",
        "####"
    };
    testMakeBox(output, expected);

    // Test Case 4
    output = makeBox(2);
    expected = {
        "##",
        "##"
    };
    testMakeBox(output, expected);

    // Test Case 5
    output = makeBox(1);
    expected = {
        "#"
    };
    testMakeBox(output, expected);

    return 0;
}