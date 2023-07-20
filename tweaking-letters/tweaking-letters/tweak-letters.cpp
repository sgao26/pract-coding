// https://edabit.com/challenge/868Q9JmTSAEhZBBrg
// level: hard


#include <iostream>
#include <vector>
using namespace std;

string tweakLetters(string s, vector<int> arr) {
    int pos = 0;
    string result = "";
    for (char c : s) {
        if (arr[pos] == -1) {
            result += char(((c - 'a') + 25) % 26 + 'a');
        }
        else if (arr[pos] == 1) {
            result += char(((c - 'a') + 1) % 26 + 'a');
        }
        else {
            result += c;
        }
        pos++;
    }
    return result;
}

int main() {
    cout << "Test 1: " << tweakLetters("apple", { 0, 1, -1, 0, -1 }) << endl; // Expected Output: "aqold"
    cout << "Test 2: " << tweakLetters("many", { 0, 0, 0, -1 }) << endl; // Expected Output: "manx"
    cout << "Test 3: " << tweakLetters("rhino", { 1, 1, 1, 1, 1 }) << endl; // Expected Output: "sijop"
    cout << "Test 4: " << tweakLetters("xyz", { 1, 1, 1 }) << endl; // Expected Output: "yza"
    cout << "Test 5: " << tweakLetters("abc", { -1, -1, -1 }) << endl; // Expected Output: "zab"

    return 0;
}