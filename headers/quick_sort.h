#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#include <vector>

// Funkcja pomocnicza do podziału tablicy
template <typename T>
int partition(std::vector<T>& arr, int low, int high) {
    T pivot = arr[high];  // Wybieramy ostatni element jako pivot
    int i = low - 1;      // Indeks mniejszego elementu

    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            ++i;
            std::swap(arr[i], arr[j]);
        }
    }
    // Zamiana pivota na odpowiednie miejsce
    std::swap(arr[i + 1], arr[high]);
    return i + 1;
}

template <typename T>
void quickSort(std::vector<T>& arr, int low, int high) {
    if (low < high) {
        // Uzyskaj indeks podziału, gdzie elementy po lewej są mniejsze, a po prawej większe od pivota
        int pi = partition(arr, low, high);

        // Sortuj rekurencyjnie elementy przed i za pivota
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

#endif
