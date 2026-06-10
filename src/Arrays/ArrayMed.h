#pragma once
#include <vector>
#include <utility>


class ArrayMed {
public:
    static std::pair<int, int> twoSum(std::vector<int> &nums, int target);

    static void sortColors(std::vector<int> &nums);

    static int majorityElement(std::vector<int> &nums);

    static int maxSubArray(std::vector<int> &nums);

    static int maxProfit(std::vector<int> &prices);

    static std::vector<int> rearrangeArray(std::vector<int> &nums);

    int longestConsecutive(std::vector<int> &nums);
};


