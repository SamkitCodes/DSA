#include <iostream>
// #include "Patterns/Patterns.h"
// #include "MathDSA/MathDSA.h"
// #include "RecursionBasics/RecursionBasics.h"
#include <vector>
// #include "HashingBasics/HashingBasics.h"
#include "Sorting/SortingAlgo.h"
//#include "Arrays/ArraysBasic.h"
#include "Arrays/ArrayMed.h"


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
    vector<int> nums1 = {0, 0, 1, 0, 3, 12};
    //vector<int> nums2 = {2,5,6};
    // map<int, int> freq = HashingBasics::frequencyCount(nums);
    SortingAlgo::QuickSort(nums1);
    for (int num: nums1) {
        cout << num << ' ';
    }
    // cout << nums.size();
}
