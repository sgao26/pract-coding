// level: expert

#include <vector>
#include <iterator>
#include <iostream>
#include <map>
using namespace std;

int bowling(vector<int> pins) {
    int sum = 0;
    int frame = 1;

    vector<int>::iterator throwIter;
    for (throwIter = pins.begin(); throwIter < pins.end(); throwIter++) {
        if (*throwIter == 10) {
            sum += (*throwIter + *(next(throwIter, 1)) + *(next(throwIter, 2)));
        }
        else if (*throwIter + *(next(throwIter, 1)) == 10) {
            sum += (*throwIter + *(next(throwIter, 1)) + *(next(throwIter, 2)));
            throwIter++;
        }
        else {
            sum += (*throwIter + *(next(throwIter, 1)));
            throwIter++;
        }
        if (frame == 10) {
            return sum;
        }
        frame++;
    }
}

int main() {
    // Test cases
    map<int, vector<int>> testCases;
    testCases[300] = { 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10 };
    testCases[80] = { 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4 };
    testCases[150] = { 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5 };
    testCases[200] = { 10, 5, 5, 10, 5, 5, 10, 5, 5, 10, 5, 5, 10, 5, 5, 10 };
    testCases[194] = { 10, 0, 10, 7, 2, 10, 10, 10, 8, 2, 9, 1, 7, 2, 10, 10, 5 };
    testCases[177] = { 8, 0, 8, 2, 10, 10, 7, 3, 9, 1, 7, 2, 10, 10, 9, 0 };

    for (const auto& test : testCases) {
        cout << "Expected: " << test.first << ", Actual: " << bowling(test.second) << endl;
    }

    return 0;
}