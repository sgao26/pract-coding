
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

string removeVirus(string files) {
    string result = "";
    vector<string> filelist;
    string file;
    stringstream filestr(files);
    string prefix;

    getline(filestr, file, ' ');
    prefix = file;
    getline(filestr, file, ' ');
    prefix = prefix + " " + file;
    while (getline(filestr, file, ',')) {
        size_t found = file.find_first_not_of(" ");
        if (found != string::npos) {
            file = file.substr(found);
        }

        if ((file.find("virus") == string::npos && file.find("malware") == string::npos) || (file.find("antivirus") != string::npos || file.find("notvirus") != string::npos)) {
            filelist.push_back(file);
        }
    }

    if (filelist.empty()) {
        return prefix + " Empty";
    }

    for (string file : filelist) {
        if (result.empty()) {
            result = file;
        }
        else {
            result += ", " + file;
        }
    }

    return prefix + " " + result;
}

void runTest(const string& testName, const string& input, const string& expectedOutput) {
    cout << "Running " << testName << "..." << endl;
    string result = removeVirus(input);
    if (result == expectedOutput) {
        cout << "Test Passed" << endl;
    }
    else {
        cout << "FAILED: Expected: " << expectedOutput << endl;
        cout << "Actual: " << result << endl;
    }
}

int main() {
    // Run the tests
    runTest("test1", "PC Files: spotifysetup.exe, virus.exe, dog.jpg", "PC Files: spotifysetup.exe, dog.jpg");
    runTest("test2", "PC Files: antivirus.exe, cat.pdf, lethalmalware.exe, dangerousvirus.exe ", "PC Files: antivirus.exe, cat.pdf");
    runTest("test3", "PC Files: notvirus.exe, funnycat.gif", "PC Files: notvirus.exe, funnycat.gif");
    runTest("test4", "PC Files: virus.exe, bestmalware.exe, memzvirus.exe", "PC Files: Empty");

    return 0;
}