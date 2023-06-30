#include <iostream>
#include <string>
#include <sstream>
using namespace std;


int evalAlgebra(const string& equation) {
    string equationWithoutSpaces = "";
    for (char c : equation) {
        if (c != ' ') {
            equationWithoutSpaces += c;
        }
    }
    size_t plusIndex = equationWithoutSpaces.find('+');
    size_t equalIndex = equationWithoutSpaces.find('=');
    string leftValue = equationWithoutSpaces.substr(0, plusIndex);
    string rightValue = equationWithoutSpaces.substr(equalIndex + 1);
    int x;
    if (leftValue.find('x') == string::npos) {    
        x = stoi(rightValue) - stoi(leftValue.substr(0, leftValue.find('x')));
    }
    else {
        x = stoi(leftValue) - stoi(rightValue.substr(0, rightValue.find('x')));
    }
    return x;
}

int main() {
    // Test cases
    if (evalAlgebra("2 + x = 19") != 17) {
        cout << "Test case failed: 2 + x = 19" << endl;
    }
    if (evalAlgebra("4 - x = 1") != 3) {
        cout << "Test case failed: 4 - x = 1" << endl;
    }
    if (evalAlgebra("23 + 1 = x") != 24) {
        cout << "Test case failed: 23 + 1 = x" << endl;
    }
    if (evalAlgebra("25 - 1 = x") != 24) {
        cout << "Test case failed: 25 - 1 = x" << endl;
    }

    return 0;
}