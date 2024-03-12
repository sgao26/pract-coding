//https://edabit.com/challenge/TjJKQzmxpR4xexMBA

#include <iostream>
#include <vector>
using namespace std;

int josephus(int people) {
	vector<int> seq;
	for (int i = 1; i <= people; i++) {
		seq.push_back(i);
	}
	int count = 0;
	while (seq.size() > 1) {
		for (int i = 0; i < seq.size(); i++) {
			if (count % 2 == 1) {
				seq.erase(seq.begin() + i);
				i--;
			}
			count++;
		}
	}
	return seq[0];
}

void test_josephus() {
    // Test cases and expected results
    int test_cases[][2] = {
        {1, 1},
        {41, 19},
        {8, 1},
        {5, 3},
        {7, 7}
    };

    for (int i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); i++) {
        int people = test_cases[i][0];
        int expected_result = test_cases[i][1];
        int result = josephus(people);
        cout << "Test " << i + 1 << ": ";
        if (result == expected_result) {
            cout << "Passed\n";
        }
        else {
            cout << "Failed. Expected: " << expected_result << ", Got: " << result << "\n";
        }
    }
}

int main() {
    test_josephus();
    return 0;
}