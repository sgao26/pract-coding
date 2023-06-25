#include <iostream>
#include <map>
#include <vector>
using namespace std;

bool sameLetterPattern(string str1, string str2) {
	map<char, int> chars;
	vector<int> pattern;
	int countchar = 1;
	if (str1.length() != str2.length()) {
		return false;
	}

	for (char c : str1) {
		if (chars.count(c) == 0) {
			chars[c] = countchar;
			countchar++;
		}
		pattern.push_back(chars[c]);
	}
	chars.clear();
	countchar = 1;
	int pos = 0;
	for (char c : str2) {
		if (chars.count(c) == 0) {
			chars[c] = countchar;
			countchar++;
		}
		if (chars[c] != pattern[pos]) {
			return false;
		}
		pos++;
	}
	return true;
}

void runTests() {
	// True tests
	cout << "True tests:" << endl;
	cout << "Test 1: " << (sameLetterPattern("ABAB", "CDCD") ? "Passed" : "Failed") << endl;
	cout << "Test 2: " << (sameLetterPattern("AAABBB", "CCCDDD") ? "Passed" : "Failed") << endl;
	cout << "Test 3: " << (sameLetterPattern("ABCBA", "BCDCB") ? "Passed" : "Failed") << endl;
	cout << "Test 4: " << (sameLetterPattern("AAAA", "BBBB") ? "Passed" : "Failed") << endl;
	cout << "Test 5: " << (sameLetterPattern("BAAB", "ABBA") ? "Passed" : "Failed") << endl;
	cout << "Test 6: " << (sameLetterPattern("BAAB", "QZZQ") ? "Passed" : "Failed") << endl;
	cout << "Test 7: " << (sameLetterPattern("TTZZVV", "PPSSBB") ? "Passed" : "Failed") << endl;
	cout << "Test 8: " << (sameLetterPattern("ZYX", "ABC") ? "Passed" : "Failed") << endl;
	cout << "Test 9: " << (sameLetterPattern("AABAA", "SSCSS") ? "Passed" : "Failed") << endl;
	cout << "Test 10: " << (sameLetterPattern("AABAABAA", "SSCSSCSS") ? "Passed" : "Failed") << endl;
	cout << "Test 11: " << (sameLetterPattern("UBUBUBUB", "WEWEWEWE") ? "Passed" : "Failed") << endl;

	// False tests
	cout << "False tests:" << endl;
	cout << "Test 1: " << (!sameLetterPattern("FFGG", "FFG") ? "Passed" : "Failed") << endl;
	cout << "Test 2: " << (!sameLetterPattern("FFGG", "CDCD") ? "Passed" : "Failed") << endl;
	cout << "Test 3: " << (!sameLetterPattern("FFFG", "GGHI") ? "Passed" : "Failed") << endl;
	cout << "Test 4: " << (!sameLetterPattern("FFFF", "ABCD") ? "Passed" : "Failed") << endl;
	cout << "Test 5: " << (!sameLetterPattern("ABCA", "ABCD") ? "Passed" : "Failed") << endl;
	cout << "Test 6: " << (!sameLetterPattern("ABCAAA", "DDABCD") ? "Passed" : "Failed") << endl;
}

int main() {
	runTests();
	return 0;
}