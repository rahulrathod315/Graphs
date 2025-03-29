# Directed Graph Representation Using Adjacency List

This folder contains an implementation of a **Directed Graph** using an **Adjacency List** in C++.

## What is an Adjacency List?

An **Adjacency List** is a collection of lists used to represent a graph. Each vertex has a list of all the vertices it is connected to. For a directed graph:

- If there is a directed edge from vertex `u` to vertex `v`, `v` will appear in `u`'s list, but `u` will not appear in `v`'s list.

### Example

For a graph with 3 vertices and directed edges `(0 → 1)` and `(1 → 2)`, the adjacency list would look like this:

```
Vertex 0: -> 1
Vertex 1: -> 2
Vertex 2:
```

## Code Overview

The implementation in [`code.cpp`](code.cpp) provides the following functionality:

1. **Graph Initialization**:
   - The graph is initialized with a specified number of vertices.
   - The adjacency list is initialized as an empty list for each vertex.

2. **Add Edge**:
   - Adds a directed edge from vertex `u` to vertex `v`.

3. **Print Graph**:
   - Prints the adjacency list representation of the graph.

### Example Usage

Here is an example of how to use the `Graph` class:

```cpp
#include "code.cpp"

int main() {
    Graph g(3); // Create a graph with 3 vertices
    g.addEdge(0, 1); // Add edge from vertex 0 to 1
    g.addEdge(1, 2); // Add edge from vertex 1 to 2

    cout << "Adjacency List:" << endl;
    g.printGraph(); // Print the adjacency list

    return 0;
}
```

### Output

```
Adjacency List:
Vertex 0: -> 1
Vertex 1: -> 2
Vertex 2:
```

## Applications of Adjacency List

- **Graph Traversals**: BFS and DFS can be efficiently implemented using adjacency lists.
- **Space Efficiency**: Adjacency lists are more space-efficient for sparse graphs.
- **Dynamic Graphs**: Adding and removing edges is efficient.

## Limitations

- **Edge Lookup**: Checking if an edge exists between two vertices can be slower compared to adjacency matrices.
- **Dense Graphs**: For dense graphs, adjacency lists may require more memory due to the overhead of pointers.

This implementation is ideal for understanding the basics of graph representation and for use cases where the graph is sparse.
