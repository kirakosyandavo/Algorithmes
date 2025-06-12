#include <iostream>
#include <vector>

using namespace std;

template <typename T>
int binary_search(vector<T>& vec, const T& value) {
    int start = 0;
    int end = vec.size() - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (vec[mid] == value) {
            return mid;
        } else if (vec[mid] < value) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1;
}

 