// https://edabit.com/challenge/zFvCgwq5cJ5nrjHnH
// level: very hard

#include <iostream>
#include <string>
using namespace std;

int gapful(int n) {
    string num = to_string(n);
    if (num.length() > 2) {
        char first = num[0];
        char last = num[num.length() - 1];
        string divis = to_string(first) + to_string(last);
        if (n % stoi(divis) == 0) {
            return n;
        }
    }
    else if (n < 100) {
        gapful(100);
    }
    gapful(n + 1);
}

/*
Describe(tests)
{
  It(test1){Assert::That(gapful(25), Equals(100));}
    It(test2){Assert::That(gapful(100), Equals(100));}
    It(test3){Assert::That(gapful(103), Equals(105));}
    It(test4){Assert::That(gapful(1442), Equals(1441));}
    It(test5){Assert::That(gapful(3345), Equals(3333));}
    It(test6){Assert::That(gapful(4780), Equals(4773));}
    It(test7){Assert::That(gapful(3078), Equals(3078));}
};

*/