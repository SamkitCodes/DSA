#pragma once
#include <vector>


class ArraysBasic {
public:
    static int removeDuplicates(std::vector<int> &nums);

    static bool check(std::vector<int> &nums);

    static void rotate(std::vector<int> &nums, int k);

    static void mergeSortedArray(std::vector<int> &nums1, int m, std::vector<int> &nums2, int n);

    static void moveZeroes(std::vector<int> &nums);

    static std::vector<int> intersection(std::vector<int> &nums1, std::vector<int> &nums2);

    static int subarraySum(std::vector<int> &nums, int k);

private:
    static void reverseRange(std::vector<int> &nums, int start, int end);


};

