 #include <iostream>
#include <vector>

using namespace std;

class Graph {
private:
    int V;  
    vector<vector<int>> adjMatrix;  

public:
    
    Graph(int vertices) {
        V = vertices;
         
     
       adjMatrix.resize(V, vector<int>(V, 0));
    
    }

    void addEdge(int src, int dest) {
        adjMatrix[src][dest] = 1;
        adjMatrix[dest][src] = 1; 
    
    }
 
 
    void display() {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int vertices, edges;
    cout << "Enter the number of vertices: ";
    cin >> vertices;
    cout << "Enter the number of edges: ";
    cin >> edges;

    Graph graph(vertices);

    cout << "Enter the edges (source and destination):" << endl;
    for (int i = 0; i < edges; i++) {
        int src, dest;
        cin >> src >> dest;
        graph.addEdge(src, dest);
    }

    cout << "Adjacency Matrix of the Graph:" << endl;
    graph.display();

    return 0;
}