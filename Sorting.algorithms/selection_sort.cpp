#include <iostream>
#include <vector>

using namespace std;

template <typename Container>
void select_sort(Container& container) {
    int n = container.size();

    for (int i = 0; i < n - 1; ++i) {
        int min_index = i;

        for (int j = i + 1; j < n; ++j) {
            if (container[j] < container[min_index]) {
                min_index = j;
            }
        }

        if (i != min_index) {
            swap(container[i], container[min_index]);
        }
    }
}
