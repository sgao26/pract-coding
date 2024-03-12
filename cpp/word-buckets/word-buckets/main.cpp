#include <iostream>
#include <vector>
#include<sstream>
#include <cassert>
using namespace std;

vector<string> bucketize(string phrase, int n) {
	vector<string> string_bucket;
	istringstream ss(phrase);
	string word;

	while (getline(ss, word, ' ')) {
		string_bucket.push_back(word);
	}

	for (int i = 0; i < string_bucket.size(); i++) {
		if (string_bucket[i].length() > n) {
			return {};
		}

		while ((string_bucket[i].length() + string_bucket[i + 1].length() + 1) <= n) {
			if ((string_bucket[i].length() + string_bucket[i + 1].length() + 1) > n) {
				break;
			}
			string_bucket[i] = string_bucket[i] + " " + string_bucket[i + 1];
			string_bucket.erase(string_bucket.begin() + i);
		}
	}

	return string_bucket;
}

int main() {
	vector<string> test = bucketize("she sells sea shells by the sea", 2);

	for (string i : test) {
		cout << i << " ";
	}
	cout << endl;


}