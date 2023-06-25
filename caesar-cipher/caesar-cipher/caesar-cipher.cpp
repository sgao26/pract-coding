// https://edabit.com/challenge/GmPfqu2jmLDBD2NYS

#include <iostream>
using namespace std;

string caesarCipher(string s, int k) {
	string result;
	for (char c : s) {
		if (!isalnum(c)) {
			result += c;
		}
		else {
			if (int(c) - 96 > 0) {
				result += ((int(c) - 97 + k) % 26) + 97;
			}
			else {
				result += ((int(c) - 65 + k) % 26) + 65;
			}
		}
	}
	return result;
}

bool testCaesarCipher(const string& input, int shift, const string& expectedOutput) {
    string result = caesarCipher(input, shift);
    if (result == expectedOutput) {
        cout << "PASS: " << input << " -> " << result << endl;
        return true;
    }
    else {
        cout << "FAIL: " << input << " -> " << result << ", expected: " << expectedOutput << endl;
        return false;
    }
}

int main() {
    bool allTestsPassed = true;

    // Test cases
    allTestsPassed &= testCaesarCipher("middle-Outz", 2, "okffng-Qwvb");
    allTestsPassed &= testCaesarCipher("Always-Look-on-the-Bright-Side-of-Life", 5, "Fqbfdx-Qttp-ts-ymj-Gwnlmy-Xnij-tk-Qnkj");
    allTestsPassed &= testCaesarCipher("A friend in need is a friend indeed", 20, "U zlcyhx ch hyyx cm u zlcyhx chxyyx");
    allTestsPassed &= testCaesarCipher("A Fool and His Money Are Soon Parted.", 27, "B Gppm boe Ijt Npofz Bsf Tppo Qbsufe.");
    allTestsPassed &= testCaesarCipher("One should not worry over things that have already happened and that cannot be changed.", 49, "Lkb pelria klq tloov lsbo qefkdp qexq exsb xiobxav exmmbkba xka qexq zxkklq yb zexkdba.");
    allTestsPassed &= testCaesarCipher("Back to Square One is a popular saying that means a person has to start over, similar to: back to the drawing board.", 126, "Xwyg pk Omqwna Kja eo w lklqhwn owuejc pdwp iawjo w lanokj dwo pk opwnp kran, oeiehwn pk: xwyg pk pda znwsejc xkwnz.");

    if (allTestsPassed) {
        cout << "All tests passed." << endl;
    }
    else {
        cout << "Some tests failed." << endl;
    }

    return 0;
}