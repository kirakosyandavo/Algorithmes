#include <iostream>
#include <vector>

using namespace std;

template <typename Iter>
void bubble_sort(Iter begin, Iter end) {
    int number = distance(begin, end);

    for (int i = 0; i < number - 1; ++i) {
        for (int j = 0; j < number - i - 1; ++j) {
            if (*(begin + j) > *(begin + j + 1)) {
                swap(*(begin + j), *(begin + j + 1));
            }
        }
    }
}

template <typename T>
void bubble_sort(T& container) {
    int number = container.size();

    for (int i = 0; i < number - 1; ++i) {
        for (int j = 0; j < number - i - 1; ++j) {
            if (container[j] > container[j + 1]) {
                swap(container[j], container[j + 1]);
            }
        }
    }
}
