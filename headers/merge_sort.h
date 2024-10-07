#ifndef MERGE_SORT_H
#define MERGE_SORT_H

#include <vector>

// Funkcja pomocnicza do scalania dwóch posortowanych połówek
template <typename T>
void merge(std::vector<T>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Tworzymy tymczasowe wektory do przechowywania elementów
    std::vector<T> L(n1), R(n2);

    // Kopiowanie danych do tymczasowych wektorów
    for (int i = 0; i < n1; ++i)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; ++j)
        R[j] = arr[mid + 1 + j];

    // Scalamy tymczasowe wektory z powrotem do arr[left..right]
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            ++i;
        } else {
            arr[k] = R[j];
            ++j;
        }
        ++k;
    }

    // Kopiujemy pozostałe elementy L[], jeśli jakieś pozostały
    while (i < n1) {
        arr[k] = L[i];
        ++i;
        ++k;
    }

    // Kopiujemy pozostałe elementy R[], jeśli jakieś pozostały
    while (j < n2) {
        arr[k] = R[j];
        ++j;
        ++k;
    }
}

// Funkcja rekurencyjna sortująca metodą scalania
template <typename T>
void mergeSort(std::vector<T>& arr, int left, int right) {
    if (left < right) {
        // Znajdź środek
        int mid = left + (right - left) / 2;

        // Sortuj pierwszą i drugą połowę
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Scalone posortowane połówki
        merge(arr, left, mid, right);
    }
}

#endif 
