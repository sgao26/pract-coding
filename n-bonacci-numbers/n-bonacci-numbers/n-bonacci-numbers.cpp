#include <iostream>
#include <vector>
using namespace std;

long long int bonacci(int N, int k) {
    if (k < N) {
        return 0;
    }
    if (N == 1) {
        return 1;
    }

    vector<long long int> sequence(k, 0);
    sequence[N - 1] = 1;

    for (int i = N; i < k; i++) { 
        for (int j = i - N; j < i; j++) {
            sequence[i] += sequence[j];
        }
    }

    return sequence[k - 1]; 
}

void assertThat(long long int actual, long long int expected) {
    if (actual == expected) {
        cout << "Test Passed" << endl;
    }
    else {
        cout << "Test Failed: Expected " << expected << ", but got " << actual << endl;
    }
}

int main() {
    // Test 1
    long long int test1_actual = bonacci(2, 7);
    long long int test1_expected = 8;
    assertThat(test1_actual, test1_expected);
    // Test 2
    long long int test2_actual = bonacci(3, 13);
    long long int test2_expected = 274;
    assertThat(test2_actual, test2_expected);
    // Test 3
    long long int test3_actual = bonacci(5, 24);
    long long int test3_expected = 203513;
    assertThat(test3_actual, test3_expected);
    // Test 4
    long long int test4_actual = bonacci(8, 44);
    long long int test4_expected = 32440904961;
    assertThat(test4_actual, test4_expected);
    // Test 5
    long long int test5_actual = bonacci(1, 4);
    long long int test5_expected = 1;
    assertThat(test5_actual, test5_expected);
    // Test 6
    long long int test6_actual = bonacci(2, 2);
    long long int test6_expected = 1;
    assertThat(test6_actual, test6_expected);
    // Test 7
    long long int test7_actual = bonacci(3, 1);
    long long int test7_expected = 0;
    assertThat(test7_actual, test7_expected);

    return 0;
}