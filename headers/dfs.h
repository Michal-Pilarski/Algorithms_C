#ifndef DFS_H
#define DFS_H

#include <iostream>
#include <vector>
#include <list>

// Klasa reprezentująca graf za pomocą listy sąsiedztwa
class DFSGraph {
private:
    int V; // Liczba wierzchołków
    std::vector<std::list<int>> adj; // Wektor list sąsiedztwa

    // Funkcja pomocnicza DFS wykorzystywana przez funkcję DFS
    void DFSUtil(int v, std::vector<bool>& visited) {
        // Zaznacz bieżący wierzchołek jako odwiedzony i wypisz go
        visited[v] = true;
        std::cout << v << " ";

        // Rekurencyjnie odwiedzaj wszystkie wierzchołki sąsiadujące z v
        for (auto i = adj[v].begin(); i != adj[v].end(); ++i)
            if (!visited[*i])
                DFSUtil(*i, visited);
    }

public:
    // Konstruktor grafu
    DFSGraph(int V) : V(V), adj(V) {}

    // Funkcja dodająca krawędź do grafu
    void addEdge(int v, int w) {
        adj[v].push_back(w); // Dodaj w do listy sąsiedztwa wierzchołka v
    }

    // Funkcja wykonująca DFS
    void DFS(int v) {
        // Zainicjuj wszystkie wierzchołki jako nieodwiedzone
        std::vector<bool> visited(V, false);

        // Wywołaj rekurencyjną funkcję pomocniczą DFS dla zadanego wierzchołka
        DFSUtil(v, visited);
    }
};

#endif 
