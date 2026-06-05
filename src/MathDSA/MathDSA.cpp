#include "MathDSA.h"
#include <iostream>

using namespace std;

/**
 * Time complexity = O(log_base10(n))
 * Space complexity = O(1)
 * @param n Number to perform operation on
 */
void MathDSA::extractDigit(int n) {
    int digit = 0;
    while (n > 0) {
        digit = n % 10;
        cout << digit << '\n';
        n /= 10;
    }
}

/**
 * Time complexity = O(log_base10(n))
 * Space complexity = O(1)
 * @param n Number to perform operation on
 */
void MathDSA::numDigits(int n) {
    /** Brute Force

    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    cout << count;
    **/

    const int digit = static_cast<int>((log10(n)) + 1);
    cout << digit;
}

/**
 * Time complexity = O(1)
 * Space complexity = O(1)
 * @param n Number to perform operation on
 */
void MathDSA::reverseNumber(int n) {
    int reverse = 0;

    while (n > 0) {
        const int digit = n % 10;
        reverse *= 10;
        reverse += digit;
        n /= 10;
    }

    cout << reverse;
}

/**
 * Time complexity = O(sqrt(n))
 * Space complexity = O(1)
 * @param n Number to perform operation on
 */
void MathDSA::allDivisors(int n) {
    // All divisor pairs are covered till sqrt(n)
    int maxPossibleDivisor = static_cast<int>(sqrt(n));

    for (int i = 0; i <= maxPossibleDivisor; i++) {
        if (n % i == 0) {
            cout << i << '\n';
            if (i != maxPossibleDivisor) {
                cout << n / i << '\n';
            }
        }
    }
}

int MathDSA::gcd(int a, int b) {
    // Recursive — Time: O(log(min(a,b))), Space: O(log(min(a,b)))
    /**
        if (b == 0) return a;
        return gcd(b, a % b);
    **/

    // Iterative — Time: O(log(min(a,b))), Space: O(1)
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;

}
