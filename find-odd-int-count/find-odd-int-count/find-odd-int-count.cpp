// https://edabit.com/challenge/wgnmQTbfssuhvZHqe

#include <iostream>
#include <vector>
#include <map>
using namespace std;


int findOdd(vector<int> arr) {
	map<int, int> counter;
	for (int i : arr) {
		if (counter.count(i) == 0) {
			counter[i] = 1;
		}
		else {
			counter[i]++;
		}
	}
	for (map<int, int>::iterator it = counter.begin(); it != counter.end(); ++it) {
		if (it->second % 2 == 1) {
			return it->first;
		}
	}
}

int main() {
    // Test 1
    vector<int> input1 = { 20, 1, -1, 2, -2, 3, 3, 5, 5, 1, 2, 4, 20, 4, -1, -2, 5 };
    int result1 = findOdd(input1);
    cout << "Test 1: " << (result1 == 5 ? "Passed" : "Failed") << endl;

    // Test 2
    vector<int> input2 = { 1, 1, 2, -2, 5, 2, 4, 4, -1, -2, 5 };
    int result2 = findOdd(input2);
    cout << "Test 2: " << (result2 == -1 ? "Passed" : "Failed") << endl;

    // Test 3
    vector<int> input3 = { 20, 1, 1, 2, 2, 3, 3, 5, 5, 4, 20, 4, 5 };
    int result3 = findOdd(input3);
    cout << "Test 3: " << (result3 == 5 ? "Passed" : "Failed") << endl;

    // Test 4
    vector<int> input4 = { 10 };
    int result4 = findOdd(input4);
    cout << "Test 4: " << (result4 == 10 ? "Passed" : "Failed") << endl;

    // Test 5
    vector<int> input5 = { 1, 1, 1, 1, 1, 1, 10, 1, 1, 1, 1 };
    int result5 = findOdd(input5);
    cout << "Test 5: " << (result5 == 10 ? "Passed" : "Failed") << endl;

    // Test 6
    vector<int> input6 = { 5, 4, 3, 2, 1, 5, 4, 3, 2, 10, 10 };
    int result6 = findOdd(input6);
    cout << "Test 6: " << (result6 == 1 ? "Passed" : "Failed") << endl;

    return 0;
}