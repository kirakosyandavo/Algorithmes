#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template <typename Iter, typename T>
constexpr Iter my_upper_bound(Iter first, Iter last, const T& value) {
    int count = distance(first, last);
    Iter it;

    while (count) {
        int step = count / 2;
        it = first;
        advance(it, step);

        if (*it <= value) {
            first = next(it);
            count -= step + 1;
        } else {
            count = step;
        }
    }

    return first;
}
