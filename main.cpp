#include <iostream>
#include "headers/quick_sort.h"
#include "headers/bfs.h"

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

    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 5);

    std::cout << "BFS od wierzchołka 0: ";
    g.BFS(0);

    return 0;
}