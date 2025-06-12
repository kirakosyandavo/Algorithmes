#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void merge(T& arr, int first, int mid, int last) {
    int first1 = first;
    int end1 = mid;
    int first2 = mid + 1;
    int end2 = last;
    T temp;
    int index = 0;

    while (first1 <= end1 && first2 <= end2) {
        if (arr[first1] > arr[first2]) {
            temp.push_back(arr[first2++]);
        } else {
            temp.push_back(arr[first1++]);
        }
    }

    while (first1 <= end1) {
        temp.push_back(arr[first1++]);
    }

    while (first2 <= end2) {
        temp.push_back(arr[first2++]);
    }

    int a = 0;
    for (int i = first; i <= last; ++i) {
        arr[i] = temp[a++];
    }
}

template <typename T>
void merge_sort(T& arr, int first, int end) {
    if (first >= end) {
        return;
    }

    int mid = first + (end - first) / 2;
    merge_sort(arr, first, mid);
    merge_sort(arr, mid + 1, end);
    merge(arr, first, mid, end);
}

