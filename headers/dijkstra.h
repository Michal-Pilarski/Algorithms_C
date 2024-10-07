#ifndef DIJKSTRA_H
#define DIJKSTRA_H

#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <climits>

class Dijkstra {
private:
    int V; 
    std::vector<std::list<std::pair<int, int>>> adj; 

public:
    // Konstruktor grafu
    Dijkstra(int V) : V(V), adj(V) {}

    // Funkcja dodająca krawędź do grafu
    void addEdge(int u, int v, int w) {
        adj[u].emplace_back(v, w); // Dodaj krawędź z u do v o wadze w
    }

    // Funkcja wykonująca algorytm Dijkstry
    void dijkstra(int src) {
        // Zainicjuj wektor odległości, ustawiając wszystkie na "nieskończoność"
        std::vector<int> dist(V, INT_MAX);
        dist[src] = 0;

        // Użyj zbioru do znajdowania wierzchołka z minimalną odległością
        std::set<std::pair<int, int>> activeVertices; // (odległość, wierzchołek)
        activeVertices.insert({0, src});

        while (!activeVertices.empty()) {
            // Pobierz wierzchołek z minimalną odległością
            int u = activeVertices.begin()->second;
            activeVertices.erase(activeVertices.begin());

            // Przejdź po sąsiadach bieżącego wierzchołka
            for (auto &[v, weight] : adj[u]) {
                // Sprawdź, czy jest krótsza ścieżka do sąsiada v przez u
                if (dist[u] + weight < dist[v]) {
                    activeVertices.erase({dist[v], v}); // Usuń stare wartości ze zbioru
                    dist[v] = dist[u] + weight;         // Zaktualizuj odległość
                    activeVertices.insert({dist[v], v}); // Wstaw nowe wartości
                }
            }
        }

        // Wypisz najkrótsze odległości od źródła do wszystkich wierzchołków
        std::cout << "Wierzchołek   Odległość od źródła\n";
        for (int i = 0; i < V; ++i)
            std::cout << i << " \t\t " << dist[i] << std::endl;
    }
};

#endif // DIJKSTRA_H
