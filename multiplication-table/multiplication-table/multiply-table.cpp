// https://edabit.com/challenge/jbf8yyjMnN7bt3H5s
// level: hard


#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> multiplicationTable(int n) {
	if (n == 1) {
		return { {1} };
	}
	vector<int> row;
	vector<vector<int>> table;
	for (int i = 1; i <= n; i++) {
		row.clear();
		for (int j = 1; j <= n; j++) {
			row.push_back(i * j);
		}
		table.push_back(row);
	}

	return table;
}

bool areTablesEqual(const vector<vector<int>>& table1, const vector<vector<int>>& table2) {
    if (table1.size() != table2.size()) {
        return false;
    }

    for (size_t i = 0; i < table1.size(); ++i) {
        if (table1[i] != table2[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    vector<vector<int>> expected1 = { {1} };
    vector<vector<int>> result1 = multiplicationTable(1);
    if (!areTablesEqual(result1, expected1)) {
        cout << "Test case 1 failed!" << endl;
    }

    vector<vector<int>> expected3 = {
        {1, 2, 3},
        {2, 4, 6},
        {3, 6, 9}
    };
    vector<vector<int>> result3 = multiplicationTable(3);
    if (!areTablesEqual(result3, expected3)) {
        cout << "Test case 2 failed!" << endl;
    }

    vector<vector<int>> expected5 = {
        {1, 2, 3, 4, 5},
        {2, 4, 6, 8, 10},
        {3, 6, 9, 12, 15},
        {4, 8, 12, 16, 20},
        {5, 10, 15, 20, 25}
    };
    vector<vector<int>> result5 = multiplicationTable(5);
    if (!areTablesEqual(result5, expected5)) {
        cout << "Test case 3 failed!" << endl;
    }

    cout << "All tests completed." << endl;

    return 0;
}