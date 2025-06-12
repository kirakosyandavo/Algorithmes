#include <iostream>
#include <vector>

using namespace std;

template <typename Container>
void insert_sort(Container& container) {
    int n = container.size();

    for (int i = 1; i < n; ++i) {
        auto value = container[i];
        int j = i - 1;

        while (j >= 0 && container[j] > value) {
            container[j + 1] = container[j];
            --j;
        }

        container[j + 1] = value;
    }
}


