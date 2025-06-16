#include<iostream>
#include<vector>
using namespace std;

int parent(int index) {
    return (index - 1) / 2;
}

int left(int index) {
    return 2 * index + 1;
}

int right(int index) {
    return index * 2 + 2;
}

template<typename T>
void max_heapify(vector<T>& vec, int n, int index) {
    int l = left(index);
    int r = right(index);
    int largest = index;
    if (l < n && vec[l] > vec[index]) {
        largest = l;
    }
    if (r < n && vec[r] > vec[largest]) {
        largest = r;
    }
    if (index != largest) {
        swap(vec[largest], vec[index]);
        max_heapify(vec, n, largest);
    }
}

template<typename T>
void Build_max_heap(vector<T>& vec, int size) {
    for (int i = size / 2 - 1; i >= 0; i--) {
        max_heapify(vec, size, i);
    }
}

template<typename T>
void heap_sort(vector<T>& vec) {
    int size = vec.size();
    Build_max_heap(vec, size);
    while (size) {
        swap(vec[0], vec[size - 1]);
        --size;
        max_heapify(vec, size, 0);
    }
}

int main() {
    vector<int> vec {58, 89, 25, 1, 4, 8};
    heap_sort(vec);
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }
    return 0;
}
