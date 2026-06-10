#include "ArraysBasic.h"
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

using namespace std;

int ArraysBasic::removeDuplicates(std::vector<int> &nums) {
    // https://leetcode.com/problems/remove-duplicates-from-sorted-array/

    int count = 1;
    if (nums.size() == 1) {
        return count;
    }

    for (int i = 0, j = 0; j < nums.size(); j++) {
        if (nums[i] != nums[j]) {
            count++;
            nums[i + 1] = nums[j];
            i++;
        }
    }

    return count;
}

bool ArraysBasic::check(vector<int> &nums) {
    // https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/
    int orderBreak = 0;
    const int size = nums.size();

    for (int i = 0; i < size; i++) {
        if (nums[i % size] > nums[(i + 1) % size]) {
            orderBreak++;
        }

        if (orderBreak > 1) {
            return false;
        }
    }
    return true;
}

void ArraysBasic::rotate(vector<int> &nums, int k) {
    // https://leetcode.com/problems/rotate-array/
    int size = nums.size();
    k = k % size;
    if (k == 0) return;
    reverseRange(nums, 0, size - k - 1);
    reverseRange(nums, size - k, nums.size() - 1);
    std::reverse(nums.begin(), nums.end());
}

void ArraysBasic::mergeSortedArray(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    // https://leetcode.com/problems/merge-sorted-array/
    int writeIndex = n + m;

    while (n >= 0) {
        if (nums1[m] >= nums2[n]) {
            nums1[writeIndex--] = nums1[m--];
        } else {
            nums1[writeIndex--] = nums2[n--];
        }
    }
}


void ArraysBasic::moveZeroes(vector<int> &nums) {
    // https://leetcode.com/problems/move-zeroes/
    int size = nums.size() - 1;
    int pointer1 = 0, pointer2 = 0;

    while (pointer1 <= size) {
        if (nums[pointer1] == 0 && pointer1 < size) {
            break;
        }
        pointer1++;
    }

    pointer2 = pointer1 + 1;


    while (pointer2 <= size) {
        if (nums[pointer2] != 0) {
            swap(nums[pointer1++], nums[pointer2]);
        }

        pointer2++;
    }
}


vector<int> ArraysBasic::intersection(vector<int> &nums1, vector<int> &nums2) {
    // https://leetcode.com/problems/intersection-of-two-arrays/
    unordered_set<int> seen(nums1.begin(), nums1.end());
    unordered_set<int> result;

    for (int num: nums2) {
        if (seen.contains(num)) {
            result.insert(num);
        }
    }

    return vector<int>(result.begin(), result.end());
}

int ArraysBasic::subarraySum(vector<int> &nums, int k) {
    // If only positives can use 2 pointer Approach
    // For longest subarray do not update prefixSum as leftmost will be needed
    // https://leetcode.com/problems/subarray-sum-equals-k/description/
    int count = 0, sum = 0;
    unordered_map<int, int> prefixSum;
    prefixSum[0] = 1;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        int rem = sum - k;
        if (prefixSum.contains(rem)) {
            count+=prefixSum[rem];
        }

        prefixSum[sum]++;
    }

    return count;
}

// Private

void ArraysBasic::reverseRange(vector<int> &nums, int start, int end) {
    bool reversed = false;

    while (!reversed) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;

        start++;
        end--;

        if (start > end) {
            reversed = true;
        }
    }
}
