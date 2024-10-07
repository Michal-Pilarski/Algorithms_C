#include <iostream>
#include "headers/quick_sort.h"

using namespace std;

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    cout << "Przed sortowaniem: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    quickSort(arr, 0, arr.size() - 1);

    cout << "Po sortowaniu: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}