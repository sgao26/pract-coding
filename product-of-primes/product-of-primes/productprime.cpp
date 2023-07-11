// level: very hard

#include <cmath>
#include <iostream>
using namespace std;

bool productOfPrimes(int num) {
    if (num < 2)
        return false;

    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            int factor1 = i;
            int factor2 = num / i;

            bool isFactor1Prime = true;
            bool isFactor2Prime = true;

            for (int j = 2; j <= sqrt(factor1); j++) {
                if (factor1 % j == 0) {
                    isFactor1Prime = false;
                    break;
                }
            }

            for (int j = 2; j <= sqrt(factor2); j++) {
                if (factor2 % j == 0) {
                    isFactor2Prime = false;
                    break;
                }
            }

            if (isFactor1Prime && isFactor2Prime)
                return true;
        }
    }

    return false;
}

int main() {
    cout << boolalpha;
    cout << productOfPrimes(2059) << endl;  // true
    cout << productOfPrimes(10) << endl;    // true
    cout << productOfPrimes(25) << endl;    // true
    cout << productOfPrimes(999) << endl;   // false

    return 0;
}