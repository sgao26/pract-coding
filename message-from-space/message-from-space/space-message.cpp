// https://edabit.com/challenge/58iEEYqxFdnkBjEiA
// level: expert

#include <iostream>
#include <string>
#include <stack>
using namespace std;

string spaceMessage(const string& str)
{
    string result;
    stack<int> multStack;
    stack<string> strStack;
    int mult = 1;

    for (char ch : str)
    {
        if (ch == '[')
        {
            multStack.push(mult);
            strStack.push(result);
            result.clear();
            mult = 1;
        }
        else if (ch == ']')
        {
            string prevStr = strStack.top();
            strStack.pop();
            int prevMult = multStack.top();
            multStack.pop();

            for (int i = 0; i < mult; ++i)
            {
                prevStr += result;
            }

            result = prevStr;
            mult = prevMult;
        }
        else if (isdigit(ch))
        {
            mult = ch - '0';
        }
        else
        {
            result += ch;
        }
    }

    return result;
}


int main()
{
    // Test 1
    string result = spaceMessage("ABCD");
    if (result == "ABCD")
        cout << "Test 1 passed." << endl;
    else
        cout << "Test 1 failed." << endl;

    // Test 2
    result = spaceMessage("AB[3CD]");
    if (result == "ABCDCDCD")
        cout << "Test 2 passed." << endl;
    else
        cout << "Test 2 failed." << endl;

    // Test 3
    result = spaceMessage("AB[2[3CD]]");
    if (result == "ABCDCDCDCDCDCD")
        cout << "Test 3 passed." << endl;
    else
        cout << "Test 3 failed." << endl;

    // Test 4
    result = spaceMessage("IF[2E]LG[5O]D");
    if (result == "IFEELGOOOOOD")
        cout << "Test 4 passed." << endl;
    else
        cout << "Test 4 failed." << endl;

    // Test 5
    result = spaceMessage("AB[2C[2EF]G]");
    if (result == "ABCEFEFGCEFEFG")
        cout << "Test 5 passed." << endl;
    else
        cout << "Test 5 failed." << endl;

    // Test 6
    result = spaceMessage("MU[2B][2A][2S][2H][2I]RISN[4O]TAMA[4Z]ING");
    if (result == "MUBBAASSHHIIRISNOOOOTAMAZZZZING")
        cout << "Test 6 passed." << endl;
    else
        cout << "Test 6 failed." << endl;

    return 0;
}