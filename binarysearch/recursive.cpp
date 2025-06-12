#include <iostream>
#include <vector>

using namespace std;

template <typename T>
int binary_search(const vector<T>& vec, const T& value, int start, int end) {
    if (start > end) {
        return -1;
    }

    int mid = start + (end - start) / 2;

    if (vec[mid] == value) {
        return mid;
    } else if (vec[mid] < value) {
        return binary_search(vec, value, mid + 1, end);
    } else {
        return binary_search(vec, value, start, mid - 1);
    }
}
