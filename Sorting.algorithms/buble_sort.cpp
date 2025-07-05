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
template<typename T>
void Bubble_sort(vector<T>&vecs){
    int n=vecs.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(vecs[j]>vecs[j+1]){
                swap(vecs[j],vecs[j+1]);
            }
        }
    }
}
