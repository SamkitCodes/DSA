#pragma once
#include <vector>

class SortingAlgo {
public:
    static void SelectionSortInPlace(std::vector<int> &arr);


    static void BubbleSortInPlace(std::vector<int> &arr);

    static void InsertionSortInPlace(std::vector<int> &arr);

    static void MergeSort(std::vector<int> &arr);
    static void QuickSort(std::vector<int> &arr);



private:
    static void MergeSortInPlace(std::vector<int> &arr, int low, int high);

    static void MergeSortHelper(std::vector<int> &arr, int low, int mid, int high);

    static void QuickSortInPlace(std::vector<int> &arr, int low, int high);

    static int QuickSortHelper(std::vector<int> &arr, int low, int high);


    static void SwapHelper(std::vector<int> &arr, int i, int j);
};
