// https://edabit.com/challenge/TTcyPfLeJxT8sATPm

#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
#include <iomanip>
using namespace std;

string actualMemorySize(string ms) {
    string num;
    string unit;
    for (char i : ms) {
        if (isdigit(i)) {
            num += i;
        }
        else {
            unit += i;
        }
    }
    double size = stod(num);
    if (unit == "GB") {
        size *= 1000;
    }
    size *= 0.93;
    if (size < 1000) {
        return to_string(int(size)) + "MB";
    }
    else {
        size /= 1000;
        stringstream ss;
        ss << fixed << setprecision(2) << size;
        return ss.str() + "GB";
    }
}

int main() {
    // Test Cases
    cout << "Test 1: " << (actualMemorySize("256MB") == "238MB" ? "Passed" : "Failed") << endl;
    cout << "Test 2: " << (actualMemorySize("512MB") == "476MB" ? "Passed" : "Failed") << endl;
    cout << "Test 3: " << (actualMemorySize("2GB") == "1.86GB" ? "Passed" : "Failed") << endl;
    cout << "Test 4: " << (actualMemorySize("8GB") == "7.44GB" ? "Passed" : "Failed") << endl;
    cout << "Test 5: " << (actualMemorySize("16GB") == "14.88GB" ? "Passed" : "Failed") << endl;
    cout << "Test 6: " << (actualMemorySize("32GB") == "29.76GB" ? "Passed" : "Failed") << endl;
    cout << "Test 7: " << (actualMemorySize("1GB") == "930MB" ? "Passed" : "Failed") << endl;

    return 0;
}