#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string javelinThrow(double v, int a) {
    const double g = 9.81;

    double a_rad = M_PI * a / 180.0;

    int ymax = round((v * v * sin(a_rad) * sin(a_rad)) / (2 * g));
    int xmax = round((v * v * sin(2 * a_rad)) / g);

    string result = "Ymax=" + to_string(ymax) + "m, Xmax=" + to_string(xmax) + "m";
    return result;
}

int main() {
    int passed = 0;

    // Test cases
    if (javelinThrow(100.0, 37) == "Ymax=185m, Xmax=980m") {
        cout << "test1 passed" << endl;
    }
    else {
        cout << "test1 failed" << endl;
    }

    return 0;
}