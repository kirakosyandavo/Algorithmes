#include <iostream>
#include <vector>
using namespace std;

void counting_sort(vector<int>& arr, int exp) {
    int output[10] = {0};
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        output[(arr[i] / exp) % 10]++;
    }

    for (int i = 1; i < 10; i++) {
        output[i] += output[i - 1];
    }

    int temp[n];
    for (int i = n - 1; i >= 0; i--) {
        temp[--output[(arr[i] / exp) % 10]] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

void radix_sort(vector<int>& arr) {
    int n = arr.size();
    int max_number = -1000;

    for (int i = 0; i < n; i++) {
        max_number = max(arr[i], max_number);
    }

    for (int index = 1; max_number / index > 0; index *= 10) {
        counting_sort(arr, index);
    }
}
