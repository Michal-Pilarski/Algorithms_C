#ifndef BELLMAN_FORD_H
#define BELLMAN_FORD_H

#include <iostream>
#include <vector>
#include <tuple>
#include <limits>

// Klasa reprezentująca graf
class Graph {
private:
    int V;
    std::vector<std::tuple<int, int, int>> edges;

public:
    // Konstruktor grafu
    Graph(int V) : V(V) {}

    // Funkcja dodająca krawędź do grafu
    void addEdge(int u, int v, int w) {
        edges.emplace_back(u, v, w); // Dodaj krawędź (u, v) o wadze w
    }

    // Funkcja wykonująca algorytm Bellmana-Forda
    void bellmanFord(int src) {
        // Zainicjuj wektor odległości, ustawiając wszystkie na "nieskończoność"
        std::vector<int> dist(V, std::numeric_limits<int>::max());
        dist[src] = 0;

        // Relaksacja krawędzi V-1 razy
        for (int i = 1; i < V; ++i) {
            for (const auto& [u, v, weight] : edges) {
                if (dist[u] != std::numeric_limits<int>::max() && dist[u] + weight < dist[v]) {
                    dist[v] = dist[u] + weight; // Zaktualizuj odległość
                }
            }
        }

        // Sprawdzenie na obecność cykli ujemnych
        for (const auto& [u, v, weight] : edges) {
            if (dist[u] != std::numeric_limits<int>::max() && dist[u] + weight < dist[v]) {
                std::cout << "Graf zawiera cykl ujemny.\n";
                return;
            }
        }

        // Wypisz najkrótsze odległości od źródła do wszystkich wierzchołków
        std::cout << "Wierzchołek   Odległość od źródła\n";
        for (int i = 0; i < V; ++i)
            std::cout << i << " \t\t " << (dist[i] == std::numeric_limits<int>::max() ? "INF" : std::to_string(dist[i])) << std::endl;
    }
};

#endif 
