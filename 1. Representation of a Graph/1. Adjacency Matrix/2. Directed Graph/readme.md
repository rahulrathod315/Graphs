# Directed Graph Representation Using Adjacency Matrix

This folder contains an implementation of a **Directed Graph** using an **Adjacency Matrix** in C++.

## What is an Adjacency Matrix?

An **Adjacency Matrix** is a 2D array used to represent a graph. Each cell in the matrix indicates whether there is an edge between two vertices. For a directed graph:

- The matrix is not necessarily symmetric.
- If there is an edge from vertex `u` to vertex `v`, then `adjMatrix[u][v]` is set to `1`.
- If there is no edge, the value is `0`.

### Example

For a graph with 3 vertices and edges from `(0 → 1)` and `(1 → 2)`, the adjacency matrix would look like this:

```
0 1 0
0 0 1
0 0 0
```

## Code Overview

The implementation in [`code.cpp`](code.cpp) provides the following functionality:

1. **Graph Initialization**:
   - The graph is initialized with a specified number of vertices.
   - The adjacency matrix is initialized with all values set to `0`.

2. **Add Edge**:
   - Adds a directed edge from vertex `u` to vertex `v`.

3. **Remove Edge**:
   - Removes a directed edge from vertex `u` to vertex `v`.

4. **Check Edge**:
   - Checks if there is a directed edge from vertex `u` to vertex `v`.

5. **Display Graph**:
   - Prints the adjacency matrix representation of the graph.

### Example Usage

Here is an example of how to use the `Graph` class:

```cpp
#include "code.cpp"

int main() {
    Graph g(3); // Create a graph with 3 vertices
    g.addEdge(0, 1); // Add edge from vertex 0 to 1
    g.addEdge(1, 2); // Add edge from vertex 1 to 2

    cout << "Adjacency Matrix:" << endl;
    g.display(); // Print the adjacency matrix

    return 0;
}
```

### Output

```
Adjacency Matrix:
0 1 0
0 0 1
0 0 0
```

## Applications of Adjacency Matrix

- **Graph Traversals**: BFS and DFS can be implemented using adjacency matrices.
- **Shortest Path Algorithms**: Algorithms like Floyd-Warshall use adjacency matrices.
- **Graph Representation**: Useful for dense graphs where the number of edges is close to the square of the number of vertices.

## Limitations

- **Space Complexity**: Requires `O(V^2)` space, where `V` is the number of vertices. This makes it less efficient for sparse graphs.
- **Edge Operations**: Adding or removing edges is efficient, but checking for neighbors can be slower compared to adjacency lists.

This implementation is ideal for understanding the basics of graph representation and for use cases where the graph is dense.
