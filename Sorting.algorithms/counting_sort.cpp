#include <iostream>
#include <vector>

using namespace std;

void counting_sort(vector<int>& vec) {
    int max = vec[0];
    for (int i = 0; i < vec.size(); ++i) {
        if (max < vec[i]) {
            max = vec[i];
        }
    }

    vector<int> count_array(max + 1, 0);

    for (int i = 0; i < vec.size(); ++i) {
        count_array[vec[i]]++;
    }

    for (int i = 1; i <= max; ++i) {
        count_array[i] += count_array[i - 1];
    }

    vector<int> output(vec.size());

    for (int i = 0; i < vec.size(); ++i) {
        output[--count_array[vec[i]]] = vec[i];
    }

    for (int i = 0; i < vec.size(); ++i) {
        vec[i] = output[i];
    }
}
