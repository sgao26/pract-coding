// https://edabit.com/challenge/tEcfscb3pak6AfvWa

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> afterNDays(vector<string> days, int n) {
    vector<string> days_of_week = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
    vector<string> result;

    for (string day : days) {
        int index = 0;
        for (int i = 0; i < days_of_week.size(); i++) {
            if (days_of_week[i] == day) {
                index = i;
                break;
            }
        }

        int new_index = (index + n) % 7;
        result.push_back(days_of_week[new_index]);
    }

    return result;
}

int main() {
    vector<string> days = { "Thursday", "Monday" };
    int n = 4;

    vector<string> result = afterNDays(days, n);

    for (const string& day : result) {
        cout << day << " ";
    }

    return 0;
}