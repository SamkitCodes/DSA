#include "HashingBasics.h"
#include <map>
#include <vector>

using namespace std;

map<int, int> HashingBasics::frequencyCount(const vector<int>& arr) {

    map<int,int> frequencyTable;

    for (int num : arr) {
        frequencyTable[num]++;
    }
    return frequencyTable;
}
