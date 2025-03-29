// Write code to represent a directed graph using adjacency matrix

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

        void addEdge(int u, int v) 
        {
            adjMatrix[u][v] = 1; // Set the edge from u to v
        }

        void removeEdge(int u, int v) 
        {
            adjMatrix[u][v] = 0; // Remove the edge from u to v
        }

        bool isEdge(int u, int v) 
        {
            return adjMatrix[u][v] == 1; // Check if there is an edge from u to v
        }

        void display() 
        {
            for (int i = 0; i < V; i++) 
            {
                for (int j = 0; j < V; j++) 
                {
                    cout << adjMatrix[i][j] << " ";
                }
                cout << endl;
            }
        }
};