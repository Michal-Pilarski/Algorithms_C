#ifndef BFS_H
#define BFS_H

#include <iostream>
#include <vector>
#include <list>
#include <queue>

class BFSGraph {
private:
    int V;                 
    std::vector<std::list<int>> adj; 

public:
    // Konstruktor grafu
    BFSGraph(int V) : V(V), adj(V) {}

    // Funkcja dodająca krawędź do grafu
    void addEdge(int v, int w) {
        adj[v].push_back(w); // Dodaj w do listy sąsiedztwa wierzchołka v
    }

    // Funkcja wykonująca BFS
    void BFS(int start) {
        // Zainicjuj wszystkie wierzchołki jako nieodwiedzone
        std::vector<bool> visited(V, false);

        // Kolejka do BFS
        std::queue<int> queue;

        // Zaznacz bieżący wierzchołek jako odwiedzony i umieść go w kolejce
        visited[start] = true;
        queue.push(start);

        while (!queue.empty()) {
            // Usuń wierzchołek z kolejki i wypisz go
            int v = queue.front();
            std::cout << v << " ";
            queue.pop();

            // Zbadaj sąsiadujące wierzchołki bieżącego wierzchołka
            for (auto i = adj[v].begin(); i != adj[v].end(); ++i) {
                if (!visited[*i]) {
                    visited[*i] = true;   // Zaznacz wierzchołek jako odwiedzony
                    queue.push(*i);       // Umieść sąsiad w kolejce
                }
            }
        }
    }
};

#endif 
