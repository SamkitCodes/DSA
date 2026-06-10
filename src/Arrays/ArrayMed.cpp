#include <vector>
#include <unordered_map>
#include "ArrayMed.h"

using namespace std;

pair<int, int> ArrayMed::twoSum(vector<int> &nums, int target) {
    // Can use map or unordered map and iterate once TC -> O(nlogn) if map
    // QuickSort or MergeSort and then 2 pointer when not allowed to use map (but need extra space
    // for returning pair)
    //https://leetcode.com/problems/two-sum/


    unordered_map<int, int> exists;

    for (int i = 0; i < nums.size(); i++) {
        int rem = target - nums[i];
        if (exists.contains(rem)) {
            return {i, exists[rem]};
        }

        exists.insert({nums[i], i});
    }

    return {};
}
