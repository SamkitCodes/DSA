#include <iostream>
// #include "Patterns/Patterns.h"
// #include "MathDSA/MathDSA.h"
// #include "RecursionBasics/RecursionBasics.h"
#include <vector>
#include "HashingBasics/HashingBasics.h"


using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // Patterns::printDiamond(5);
    // Patterns::distanceMatrix(4);

    //int n = 36;
    //MathDSA::extractDigit(n);
    //MathDSA::numDigits(n);
    //MathDSA::reverseNumber(n);
    //MathDSA::allDivisors(36);
    // int gcd = MathDSA::gcd(56, 8);
    // cout << gcd;
    // int arr[] = {1,2,3,4,5};
    // RecursionBasics::reverseArray(arr, 0, size(arr));
    // for (int i = 0; i < size(arr); i ++) {
    //     cout << arr[i];
    // }
    // cout << RecursionBasics::stringPalindromeCheck("MadaM");
    vector<int> nums = {1,2,3,3,3,3,5,6,7,66};
    map<int, int> freq = HashingBasics::frequencyCount(nums);
    for (auto pair : freq) {
        cout << pair.first << "->" << pair.second << '\n';
    }


}