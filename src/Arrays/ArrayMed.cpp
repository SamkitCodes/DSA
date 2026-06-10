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

void ArrayMed::sortColors(vector<int> &nums) {
    // Dutch National Flag Algorithm
    // Low should point at start of 1s, high at start of 2, and sort mid-high
    // https://leetcode.com/problems/sort-colors/
    int low = 0, mid = 0, high = nums.size() - 1;

    while (mid <= high) {
        if (nums[mid] == 2) {
            swap(nums[mid], nums[high--]);
        } else if (nums[mid] == 0) {
            swap(nums[mid++], nums[low++]);
        } else {
            mid++;
        }
    }
}

int ArrayMed::majorityElement(vector<int> &nums) {
    // Moore's Voting Algorithm

    int count = 0;
    int candidate;
    int size = nums.size();
    for (int i = 0; i < nums.size(); i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    count = 0;
    for (int num: nums) {
        if (num == candidate) {
            count++;
        }
    }

    if (count >= (nums.size() - 1) / 2) {
        return candidate;
    }

    return -1;
}

int ArrayMed::maxSubArray(vector<int> &nums) {
    // https://leetcode.com/problems/maximum-subarray/
    int sum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
        if (sum > maxSum) {
            maxSum = sum;
        }

        if (sum < 0) {
            sum = 0;
        }
    }

    return maxSum;
}
