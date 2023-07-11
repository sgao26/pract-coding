// https://edabit.com/challenge/MshtuGs6cstBqnhDu
// level: very hard

#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<vector<int>> finals(int r, int c, vector<string> i) {
    vector<vector<int>> result(r, vector<int>(c, 0));

    for (string operation : i) {
        string num = "";
        string rorc = "";
        for (char ch : operation) {
            if (isdigit(ch)) {
                num += ch;
            }
            else {
                rorc += ch;
            }
        }
        int index = stoi(num);
        if (rorc == "r") {
            for (int j = 0; j < c; j++) {
                result[index][j] += 1;
            }
        }
        else if (rorc == "c") {
            for (int j = 0; j < r; j++) {
                result[j][index] += 1;
            }
        }
    }
    return result;
}

int main() {
    vector<pair<pair<int, int>, vector<string>>> testCases = {
        {{2, 2}, {"0r", "0r", "0r", "1c"}},
        {{2, 2}, {"0c"}},
        {{3, 3}, {"0c", "1c", "1c", "2c", "2c", "2c"}},
        {{3, 3}, {"2r", "2c", "1r", "0c"}},
        {{1, 1}, {}},
        {{3, 3}, {"0r", "2c", "1r", "2c", "1c", "1r", "1r"}},
        {{3, 3}, {}},
        {{3, 4}, {"1r", "1r", "1r", "3c", "3c", "3c"}},
        {{10, 1}, {"1r", "2r", "3r", "0c"}},
        {{2, 5}, {"1r", "1r", "1r", "1c", "0c", "0c", "1r", "0c", "1r", "0c"}}
    };

    for (int i = 0; i < testCases.size(); i++) {
        int r = testCases[i].first.first;
        int c = testCases[i].first.second;
        vector<string> incrementOps = testCases[i].second;

        vector<vector<int>> result = finals(r, c, incrementOps);

        cout << "Test Case " << i + 1 << ":" << endl;
        for (vector<int> row : result) {
            for (int val : row) {
                cout << val << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}