#include <iostream>
#include "headers/quick_sort.h"
#include "headers/bubble_sort.h"
#include "headers/selection_sort.h"
#include "headers/insertion_sort.h"
#include "headers/merge_sort.h"
#include "headers/heap_sort.h"
#include "headers/dfs.h"
#include "headers/bfs.h"
#include "headers/dijkstra.h"
#include "headers/bellman_ford.h"

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

    BellmanFord g(5);
    g.addEdge(0, 1, -1);
    g.addEdge(0, 2, 4);
    g.addEdge(1, 2, 3);
    g.addEdge(1, 3, 2);
    g.addEdge(1, 4, 2);
    g.addEdge(3, 2, 5);
    g.addEdge(3, 1, 1);
    g.addEdge(4, 3, -3);

    std::cout << "Bellman-Ford algorithm:\n";
    g.bellmanFord(0);

    return 0;
}