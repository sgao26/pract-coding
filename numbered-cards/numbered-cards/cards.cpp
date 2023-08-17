// https://edabit.com/challenge/WKDLPg5MqXXMXAzhC
// level: hard


#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool winRound(vector<int> you, vector<int> opp) {
	int firstdig, seconddig, yours, opps;

	firstdig = *max_element(you.begin(), you.end()) * 10;
	you.erase(max_element(you.begin(), you.end()));
	seconddig = *max_element(you.begin(), you.end());
	yours = firstdig + seconddig;

	firstdig = 0;
	seconddig = 0;

	firstdig = *max_element(opp.begin(), opp.end()) * 10;
	opp.erase(max_element(opp.begin(), opp.end()));
	seconddig = *max_element(opp.begin(), opp.end());
	opps = firstdig + seconddig;

	if (yours > opps) {
		return true;
	}
	else {
		return false;
	}
}

void test(bool condition) {
    if (condition) {
        cout << " - Passed" << endl;
    }
    else {
        cout << " - Failed" << endl;
    }
}

int main() {

    vector<int> yourinput = {2, 5, 2, 6, 9};

    vector<int> oppinput = {3, 7, 3, 1, 2};

    bool expectedResults = true;


    bool result = winRound(yourinput, oppinput);
	test(result == expectedResults);

    return 0;
}