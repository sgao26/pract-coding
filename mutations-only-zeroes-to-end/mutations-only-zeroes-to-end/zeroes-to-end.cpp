// https://edabit.com/challenge/QTHN5LWYqdBWm4tBz

#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

vector<int> zeroesToEnd(vector<int> a) {
    int count = 0;
    int pos = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == 0) {
            a.erase(a.begin() + i);
            count++;
            i--;
        }
    }
    for (int i = 0; i < count; i++) {
        a.push_back(0);
    }

    return a;
}

int main() {
    vector<int> a1 = { 1, 2, 0, 0, 4, 0, 5 };
    vector<int> a2 = { 0, 0, 1, 3 };
    vector<int> a3 = { 0, 0, 2, 0, 5 };
    vector<int> a4 = { 4, 4, 5 };
    vector<int> a5 = { 0, 0 };

    if (zeroesToEnd(a1) == vector<int>{1, 2, 4, 5, 0, 0, 0}) {
        cout << "Test 1 passed successfully!" << endl;
    }
    else {
        cout << "Test 1 failed." << endl;
    }

    if (zeroesToEnd(a2) == vector<int>{1, 3, 0, 0}) {
        cout << "Test 2 passed successfully!" << endl;
    }
    else {
        cout << "Test 2 failed." << endl;
    }

    if (zeroesToEnd(a3) == vector<int>{2, 5, 0, 0, 0}) {
        cout << "Test 3 passed successfully!" << endl;
    }
    else {
        cout << "Test 3 failed." << endl;
    }

    if (zeroesToEnd(a4) == vector<int>{4, 4, 5}) {
        cout << "Test 4 passed successfully!" << endl;
    }
    else {
        cout << "Test 4 failed." << endl;
    }

    if (zeroesToEnd(a5) == vector<int>{0, 0}) {
        cout << "Test 5 passed successfully!" << endl;
    }
    else {
        cout << "Test 5 failed." << endl;
    }

    return 0;
}