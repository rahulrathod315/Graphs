// Write code to represent directed graph using adjacency list

#include <iostream>
#include <vector>

using namespace std;

class Graph 
{
    int V; // Number of vertices
    vector<vector<int>> adj; // Adjacency list
    
public:
    Graph(int V) 
    {
        this->V = V;
        adj.resize(V);
    }

    void addEdge(int u, int v) 
    {
        adj[u].push_back(v); // For directed graph
    }

    void printGraph() 
    {
        for (int i = 0; i < V; i++) 
        {
            cout << "Vertex " << i << ":";
            for (int j : adj[i]) 
            {
                cout << " -> " << j;
            }
            cout << endl;
        }
    }
};