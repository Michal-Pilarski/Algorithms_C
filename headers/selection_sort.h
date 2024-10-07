#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

#include <vector>

template <typename T>
void selectionSort(std::vector<T>& arr) {
    int n = arr.size();
    
    for (int i = 0; i < n - 1; ++i) {
        // Znajdź indeks najmniejszego elementu w nieposortowanej części tablicy
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Zamień najmniejszy element z elementem na pozycji i
        if (minIndex != i) {
            std::swap(arr[i], arr[minIndex]);
        }
    }
}

#endif
