#include <iostream>
#include <string>
using namespace std;

bool validWordNest(const string& word, string nest) {
    if (nest == word) {
        return true;
    }
    else if (nest.find(word) == string::npos) {
        return false;
    }
    else {
        size_t pos = nest.find(word);
        nest.erase(pos, word.size());
        return validWordNest(word, nest);
    }
}

bool runTest(const string& testName, const string& word, const string& nest, bool expected) {
    bool result = validWordNest(word, nest);
    if (result == expected) {
        cout << "Test: " << testName << " - Passed" << endl;
        return true;
    }
    else {
        cout << "Test: " << testName << " - Failed" << endl;
        return false;
    }
}

int main() {
    cout << "Running tests..." << endl;

    // Test 1
    bool test1 = runTest("test1", "redeem", "rederedredrredredrerrrederedeememedeemedeemedeeemeemmedeemeemeemem", false);

    // Test 2
    bool test2 = runTest("test2", "survey", "sursursurvsurvssurssursusurveyrveyveyurveyveyurveyeyeyveyvey", true);

    // ... Run more tests ...

    if (test1 && test2 /* && ... */) {
        cout << "All tests passed!" << endl;
    }
    else {
        cout << "Some tests failed!" << endl;
    }

    return 0;
}