// https://edabit.com/challenge/YLhyaRoSBmWrC3b22
// level: hard


#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

string encodeMorse(const string& input) {
    unordered_map<char, string> morseCode = {
        {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."}, {'F', "..-."},
        {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."},
        {'M', "--"}, {'N', "-."}, {'O', "---"}, {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."},
        {'S', "..."}, {'T', "-"}, {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"},
        {'Y', "-.--"}, {'Z', "--.."}, {'0', "-----"}, {'1', ".----"}, {'2', "..---"},
        {'3', "...--"}, {'4', "....-"}, {'5', "....."}, {'6', "-...."}, {'7', "--..."},
        {'8', "---.."}, {'9', "----."}, {'.', ".-.-.-"}, {',', "--..--"}, {'?', "..--.."},
        {'!', "-.-.--"}, {'\'', ".----."}, {'"', ".-..-."}, {'-', "-....-"}, {'/', "-..-."},
        {'(', "-.--."}, {')', "-.--.-"}, {'=', "-...-"}, {'+', ".-.-."}, {'*', "-..-"},
        {'@', ".--.-."}, {' ', " "}, {':', "---..."}
    };

    string morse;
    for (char c : input) {
        c = toupper(c);
        if (morseCode.find(c) != morseCode.end()) {
            morse += morseCode[c] + " ";
        }
    }

    if (!morse.empty() && morse.back() == ' ') {
        morse.pop_back();
    }

    return morse;
}

int main() {
    cout << encodeMorse("EDABBIT CHALLENGE") << endl;  // Expected output: ". -.. .- -... -... .. -   -.-. .... .- .-.. .-.. . -. --. ."
    cout << encodeMorse("HELP ME !") << endl;  // Expected output: ".... . .-.. .--.   -- .   -.-.--"
    cout << encodeMorse("CHALLENGE") << endl;  // Expected output: "-.-. .... .- .-.. .-.. . -. --. ."
    cout << encodeMorse("1 APPLE AND 5 CHERRY, 7 SANDWICHES, 2 TABLES, 9 INVITED GUYS ! THAT'S SO COOL...") << endl;

    return 0;
}