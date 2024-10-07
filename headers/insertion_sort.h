#ifndef INSERTION_SORT_H
#define INSERTION_SORT_H

#include <vector>

template <typename T>
void insertionSort(std::vector<T>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        T key = arr[i];
        int j = i - 1;

        // Przesuń elementy arr[0...i-1], które są większe niż key, o jedno miejsce w prawo
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        // Wstaw element na odpowiednią pozycję
        arr[j + 1] = key;
    }
}

#endif 
