#include <iostream>
#include <vector>

using namespace std;

class Graph 
{
    private:
        int V; // Number of vertices
        vector<vector<int>> adjMatrix; // Adjacency matrix
    public:
        Graph(int V) 
        {
            this->V = V;
            adjMatrix.resize(V, vector<int>(V, 0)); // Initialize adjacency matrix with 0
        }

        void AddEdge(int i, int j) 
        {
            adjMatrix[i][j] = 1;    // Add the edge from i to j
            adjMatrix[j][i] = 1;    // Add the edge from j to i (undirected)
        }

        void RemoveEdge(int u, int v) 
        {
            adjMatrix[u][v] = 0; // Remove the edge from u to v
            adjMatrix[v][u] = 0; // Remove the edge from v to u (undirected)
        }

        void PrintGraph() 
        {
            for (int i = 0; i < V; i++) 
            {
                for (int j = 0; j < V; j++) 
                {
                    cout << adjMatrix[i][j] << " "; // Print the adjacency matrix
                }
                cout << endl;
            }
        }
}; 