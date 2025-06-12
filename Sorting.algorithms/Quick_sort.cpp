#include <iostream>
#include <vector>

using namespace std;

/*
int partition(vector<int>& vec, int first, int last) {
    int pivot = vec[last];
    int i = first - 1;

    for (int j = first; j < last; ++j) {
        if (vec[j] < pivot) {
            ++i;
            swap(vec[i], vec[j]);
        }
    }

    swap(vec[i + 1], vec[last]);
    return i + 1;
}
*/

int partition(vector<int>& vec, int first, int last) {
    int pivot = vec[first];
    int i = first;
    int j = last + 1;

    while (i < j) {
        do {
            ++i;
        } while (i <= last && vec[i] <= pivot);

        do {
            --j;
        } while (j > first && vec[j] > pivot);

        if (i < j) {
            swap(vec[i], vec[j]);
        }
    }

    swap(vec[first], vec[j]);
    return j;
}

void quick_sort(vector<int>& vec, int first, int high) {
    if (first >= high) {
        return;
    }

    int mex = partition(vec, first, high);
    quick_sort(vec, first, mex - 1);
    quick_sort(vec, mex + 1, high);
}
