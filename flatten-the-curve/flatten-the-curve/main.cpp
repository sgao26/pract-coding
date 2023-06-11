// https://edabit.com/challenge/KCimR56ZQXxwt8sRE

#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

vector<float> flattenCurve(vector<int> arr) {
	vector<float> result;
	float sum = 0;
	int count = 0;
	if (!arr.empty()) {
		for (int i : arr) {
			sum += i;
			count++;
		}

		for (int i = 0; i < count; i++) {
			result.push_back(round(sum / count * 10) / 10);
		}
	}

	return result;
}

int main() {
	int input;
	vector <int> array;

	cout << "Enter list of integers with a letter at the end: ";
	while (cin >> input) {
		array.push_back(input);
	}

	vector<float> result = flattenCurve(array);
	for (float i : result) {
		cout << i << " ";
	}
	cout << endl;


	return 0;
}