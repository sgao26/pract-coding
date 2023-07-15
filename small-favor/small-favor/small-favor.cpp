//level: very hard

#include <iostream>
#include <string>
using namespace std;

bool isNumber(string s)
{
	for (int i = 0; i < s.length(); i++)
	{
		if (isdigit(s[i]) == false) return false;
	}
	return true;
}
string smallFavor(string s)
{
	int i = s.length() - 1;
	if (s.find("Fakemonthy") != string::npos) return s;
	while (i >= 0 && isNumber(string(1, s[i])) == false) i--;
	if (i > 1 && s[i - 2] != '|') {
		if (stoi(s.substr(i - 1, 2)) < 25) s = s.substr(0, i - 1) + "20" + s.substr(i - 1);
		else s = s.substr(0, i - 1) + "19" + s.substr(i - 1);
	}
	i -= 15;
	while (i > 1 && isNumber(string(1, s[i])) == false) i--;
	if (i > 1 && s[i - 2] != '|') {
		if (stoi(s.substr(i - 1, 2)) < 25) s = s.substr(0, i - 1) + "20" + s.substr(i - 1);
		else s = s.substr(0, i - 1) + "19" + s.substr(i - 1);
	}
	return s;
}

int main() {
	cout << "Test 1: " << (smallFavor("I was born on 11/02/98") == "I was born on 11/02/1998" ? "Passed" : "Failed") << endl;
	cout << "Test 2: " << (smallFavor("I was born on 11/02/98 and what about you?") == "I was born on 11/02/1998 and what about you?" ? "Passed" : "Failed") << endl;
	cout << "Test 3: " << (smallFavor("I was born on 11.02.98") == "I was born on 11.02.1998" ? "Passed" : "Failed") << endl;
	cout << "Test 4: " << (smallFavor("I was born on 11|02|98") == "I was born on 11|02|98" ? "Passed" : "Failed") << endl;
	cout << "Test 5: " << (smallFavor("I was born on 02/11/19") == "I was born on 02/11/2019" ? "Passed" : "Failed") << endl;
	cout << "Test 6: " << (smallFavor("I was born on 02.11.19") == "I was born on 02.11.2019" ? "Passed" : "Failed") << endl;
	cout << "Test 7: " << (smallFavor("I was born on February, 02. 98.") == "I was born on February, 02. 1998." ? "Passed" : "Failed") << endl;
	cout << "Test 8: " << (smallFavor("I was born on January, 01. 15. and today is 08/10/20") == "I was born on January, 01. 2015. and today is 08/10/2020" ? "Passed" : "Failed") << endl;
	cout << "Test 9: " << (smallFavor("I was born on January, 01. 15. and today is October, 08. 20.") == "I was born on January, 01. 2015. and today is October, 08. 2020." ? "Passed" : "Failed") << endl;
	cout << "Test 10: " << (smallFavor("I was born on Fakemonthy, 01. 15. dont change invalid dates") == "I was born on Fakemonthy, 01. 15. dont change invalid dates" ? "Passed" : "Failed") << endl;
	
	return 0;
}

