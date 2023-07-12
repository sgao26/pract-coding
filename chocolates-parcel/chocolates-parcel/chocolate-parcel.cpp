#include <iostream>
using namespace std;

int chocolatesParcel(int nSmall, int nBig, int desiredWeight) {
	bool possible = false;
	for (int i = nBig; i >= 0; i--) {
		int temp = desiredWeight;
		temp -= (i * 5);
		if (temp % 2 == 0 && temp / 2 <= nSmall) {
			possible = true;
		}
	}

	if (desiredWeight < 2 || (nSmall * 2 + nBig * 5) < desiredWeight || possible == false) {
		return -1;
	}
	int maxBig = desiredWeight / 5;
	int temp = desiredWeight;

	if (nBig >= maxBig) {
		desiredWeight -= (maxBig * 5);
	}
	else {
		desiredWeight -= (nBig * 5);
	}


	if (desiredWeight <= nSmall * 2 && desiredWeight % 2 == 0) {
		return desiredWeight / 2;
	}
	else {
		return (desiredWeight + 5) / 2;
	}
}

int main() {
	cout << chocolatesParcel(4, 1, 13) << endl; // Expected: 4
	cout << chocolatesParcel(4, 1, 14) << endl; // Expected: -1
	cout << chocolatesParcel(2, 1, 7) << endl;  // Expected: 1
	cout << chocolatesParcel(4, 1, 12) << endl; // Expected: -1

	return 0;
}