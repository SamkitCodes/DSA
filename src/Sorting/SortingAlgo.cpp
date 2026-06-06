#include "SortingAlgo.h"
#include <vector>

void SortingAlgo::SelectionSortInPlace(std::vector<int> &arr) {
    for (int i = 0; i <= arr.size() - 2; i++) {
        int minIndex = i;
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[minIndex] > arr[j]) {
                SwapHelper(arr, minIndex, j);
            }
        }
    }
}

void SortingAlgo::SwapHelper(std::vector<int> &arr, int i, int j) {
    const int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void SortingAlgo::BubbleSortInPlace(std::vector<int> &arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        bool sorted = true;
        for (int j = 0; j < arr.size() - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                sorted = false;
                SwapHelper(arr, j, j + 1);
            }
        }

        if (sorted) {
            return;
        }
    }
}

void SortingAlgo::InsertionSortInPlace(std::vector<int> &arr) {
    for (int i = 1; i <= arr.size() - 1; i++) {
        int index = i;
        while (index >= 1) {
            if (arr[index] < arr[index - 1]) {
                SwapHelper(arr, index, index - 1);
                index--;
            } else {
                break;
            }
        }
    }
}

void SortingAlgo::MergeSort(std::vector<int> &arr) {
    MergeSortInPlace(arr, 0, static_cast<int>(arr.size() - 1));
}

void SortingAlgo::MergeSortInPlace(std::vector<int> &arr, int low, int high) {
    if (low >= high) {
        return;
    }
    int mid = (low + high) / 2;

    MergeSortInPlace(arr, low, mid);
    MergeSortInPlace(arr, mid + 1, high);
    MergeSortHelper(arr, low, mid, high);
}


void SortingAlgo::MergeSortHelper(std::vector<int> &arr, int low, int mid, int high) {
    std::vector<int> temp;

    int leftArr = mid - low + 1;
    int rightArr = high - mid;;

    std::vector<int> tempL(leftArr), tempR(rightArr);

    for (int i = 0; i < leftArr; i++) {
        tempL[i] = arr[low + i];
    }
    for (int j = 0; j < rightArr; j++) {
        tempR[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0;


    while (i < leftArr && j < rightArr) {
        if (tempL[i] <= tempR[j]) {
            arr[low] = tempL[i];
            i++;
        } else {
            arr[low] = tempR[j];
            j++;
        }
        low++;
    }

    while (i < leftArr) {
        arr[low++] = tempL[i++];
    }
    while (j < rightArr) {
        arr[low++] = tempR[j++];
    }
}


void SortingAlgo::QuickSort(std::vector<int> &arr) {
    QuickSortInPlace(arr, 0, arr.size() - 1);
}

void SortingAlgo::QuickSortInPlace(std::vector<int> &arr, int low, int high) {
    if (low >= high) {
        return;
    }

    int pivotIndex = QuickSortHelper(arr, low, high);
    QuickSortInPlace(arr, low, pivotIndex - 1);
    QuickSortInPlace(arr, pivotIndex + 1, high);
}

// Hoare's Partition Algorithm
int SortingAlgo::QuickSortHelper(std::vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low, j = high;

    while (i < j) {
        while (i <= high && arr[i] <= pivot) {
            i++;
        }
        while (j >= low  && arr[j] > pivot) {
            j--;
        }

        if (i < j) std::swap(arr[i], arr[j]);
    }

    std::swap(arr[low], arr[j]);
    return j;
}
