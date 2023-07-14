// https://edabit.com/challenge/tEcfscb3pak6AfvWa

#include <iostream>
#include <vector>
#include <string>
using namespace std;

using namespace std;

vector<string> afterNDays(vector<string> days, int n) {
	vector<string> dayNames = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	for (string& day : days) {
		int pos = find(dayNames.begin(), dayNames.end(), day) - dayNames.begin();
		pos += n;
		pos = pos % 7;
		day = dayNames[pos];
	}
	return days;
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