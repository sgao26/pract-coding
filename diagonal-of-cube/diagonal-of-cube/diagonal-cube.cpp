// https://edabit.com/challenge/uEiTAhNN6HgESspWb

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

// originally the website wanted the function to return float type but it caused errors with precision and altered result
// example: test failed, expected 3.46, got 3.46
double cubeDiagonal(int volume) {
    double result = sqrt(3) * cbrt(volume);
    return round(result * 100) / 100;
}

int main() {
    // Test cases
    int testCases[] = { 8, 343, 1158, 12, 1, 48, 1728 };
    float results[] = { 3.46, 12.12, 18.19, 3.97, 1.73, 6.29, 20.78 };
    int numTestCases = sizeof(testCases) / sizeof(testCases[0]);

    for (int i = 0; i < numTestCases; i++) {
        float diagonal = cubeDiagonal(testCases[i]);
        cout << "Test " << (i + 1) << ": " << diagonal << " - ";
        if (diagonal == results[i]) {
            cout << "Test passed" << endl;
        }
        else {
            cout << "Test failed" << endl;
        }
    }

    return 0;
}