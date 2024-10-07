#ifndef HEAP_SORT_H
#define HEAP_SORT_H

#include <vector>

template <typename T>
void heapify(std::vector<T>& arr, int n, int i) {
    int largest = i;           // Zainicjuj największy element 
    int left = 2 * i + 1;      // Lewy liść
    int right = 2 * i + 2;     // Prawy liść

    // Jeśli lewy liść jest większy niż największy element 
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // Jeśli prawy liść jest większy niż największy element
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // Jeśli największy element nie jest korzeniem
    if (largest != i) {
        std::swap(arr[i], arr[largest]);

        // Rekurencyjnie zbuduj kopiec
        heapify(arr, n, largest);
    }
}

// Funkcja sortująca metodą kopcowania
template <typename T>
void heapSort(std::vector<T>& arr) {
    int n = arr.size();

    // Budowanie kopca (przekształcanie tablicy na kopiec max-heap)
    for (int i = n / 2 - 1; i >= 0; --i)
        heapify(arr, n, i);

    // Usuwanie elementów z kopca jeden po drugim
    for (int i = n - 1; i >= 0; --i) {
        // Przenieś bieżący korzeń do końca
        std::swap(arr[0], arr[i]);

        // Wywołaj heapify na zredukowanym kopcu
        heapify(arr, i, 0);
    }
}

#endif
