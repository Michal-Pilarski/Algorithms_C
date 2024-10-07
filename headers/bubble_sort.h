#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

#include <vector>

// template - szablon, po to żeby funkcja działała na dowolnym typie zmiennych
template <typename T>
void bubbleSort(std::vector<T>& arr) {
    bool swapped;
    int n = arr.size();
    do {
        swapped = false;
        for (int i = 1; i < n; ++i) {
            if (arr[i - 1] > arr[i]) {
                std::swap(arr[i - 1], arr[i]);
                swapped = true;
            }
        }
        // Po każdej iteracji ostatni element jest na właściwej pozycji
        --n;
    } while (swapped);
}

#endif 
