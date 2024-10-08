# Algorytmy Grafowe i Sortujące w C++

Repozytorium zawiera implementacje różnych algorytmów grafowych oraz sortujących w języku C++, zapisane w formie plików nagłówkowych. Każdy algorytm znajduje się w osobnym pliku nagłówkowym i jest zaimplementowany w oparciu o klasę `Nazwa algorytmu`+Graph (dla algorytmów grafowych) 
lub odpowiednią funkcję sortującą.

### Algorytmy Grafowe

1. **DFS (Depth First Search)**
   - Plik: `dfs.h`
   - Algorytm przeszukiwania grafu w głąb, który rekurencyjnie odwiedza wierzchołki, zaczynając od zadanego wierzchołka źródłowego.

2. **BFS (Breadth First Search)**
   - Plik: `bfs.h`
   - Algorytm przeszukiwania grafu wszerz, wykorzystujący kolejkę do odwiedzania wierzchołków warstwami.

3. **Dijkstra**
   - Plik: `dijkstra.h`
   - Algorytm znajdowania najkrótszej ścieżki w grafie o nieujemnych wagach krawędzi, oparty na strategii "najpierw najbliższe".

4. **Bellman-Ford**
   - Plik: `bellman_ford.h`
   - Algorytm znajdujący najkrótsze ścieżki w grafie z możliwością wystąpienia krawędzi o ujemnych wagach. Wykrywa również cykle o ujemnej sumie wag.

### Algorytmy Sortujące

1. **Sortowanie Bąbelkowe (Bubble Sort)**
   - Plik: `bubble_sort.h`
   - Prosty algorytm sortujący, który porównuje sąsiednie elementy i zamienia je miejscami, jeśli są w złej kolejności.

2. **Sortowanie przez Wstawianie (Insertion Sort)**
   - Plik: `insertion_sort.h`
   - Algorytm sortowania, który buduje posortowaną listę element po elemencie, wstawiając kolejne elementy w odpowiednie miejsce.

3. **Sortowanie przez Wybieranie (Selection Sort)**
   - Plik: `selection_sort.h`
   - Algorytm sortujący, który iteracyjnie wybiera najmniejszy element z nieposortowanej części listy i umieszcza go na początku.

4. **Sortowanie Szybkie (Quick Sort)**
   - Plik: `quick_sort.h`
   - Algorytm sortujący oparty na metodzie "dziel i zwyciężaj", wybierający pivot i dzielący tablicę na dwie części, które są sortowane niezależnie.

5. **Sortowanie przez Scalanie (Merge Sort)**
   - Plik: `merge_sort.h`
   - Algorytm rekurencyjny sortujący, który dzieli tablicę na dwie części, sortuje je oddzielnie, a następnie scala posortowane części.

6. **Sortowanie przez Kopcowanie (Heap Sort)**
   - Plik: `heap_sort.h`
   - Algorytm sortujący oparty na strukturze danych zwanej kopcem (heap), który iteracyjnie buduje kopiec maksymalny i usuwa największy element.


## Jak skompilować i uruchomić

Przy użyciu kompilatora g++<br>
```
g++ main.cpp -o main.exe
main.exe
```
