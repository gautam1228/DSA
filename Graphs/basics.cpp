#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>

using namespace std;

class Graph {
    // Adjacency list representation
    private:
        void dfsRecursive(int src, unordered_map<int, bool> &visited) {
            // NOTE: ---------- src has been VISITED ----------
            visited[src] = true;
            cout << src << " ";
            
            // exploring all the neighbours of src
            for (auto nbr: adjList[src]) {
                if (!visited[nbr]) {
                    dfsRecursive(nbr, visited);
                }
            }
            // NOTE: ---------- src has been EXPLORED ----------
        }
    public:
        unordered_map<int, vector<int>> adjList;

        void addEdge (int u, int v, bool direction) {
            if (direction) {
                // Directed Edge
                adjList[u].push_back(v);
            }
            else {
                // Undirected Edge
                adjList[u].push_back(v);
                adjList[v].push_back(u);
            }
        }

        void printAdjList () {
            for (auto i: adjList) {
                cout << i.first << ": ";
                cout << "{ ";
                for (auto j: i.second) {
                    cout << j << ", ";
                }
                cout << "}" << endl;
            }
        }

        void bfsTraversal (int src) {
            queue<int> q;
            unordered_map<int, bool> visited;
            
            q.push(src);
            visited[src] = true;

            cout << "BFS Traversal:" << endl;
            while (!q.empty()) {
                int frontNode = q.front();
                q.pop();
                cout << frontNode << " ";
                for (auto nbr: adjList[frontNode]) {
                    if (!visited[nbr]) {
                        q.push(nbr);
                        visited[nbr] = true;
                    }
                }
            }
            cout << endl;
        }

        void dfsTraversal (int src) {
            // This one works only with graphs with no dcc
            cout << "DFS Traversal:" << endl;
            
            unordered_map<int, bool> visited;
            
            dfsRecursive(src, visited);

            cout << endl;
        
        }

};

int main () {

    Graph g;

    g.addEdge(0, 1, 0);
    g.addEdge(1, 2, 0);
    g.addEdge(2, 3, 0);
    g.addEdge(2, 4, 0);
    g.addEdge(4, 5, 0);

    g.printAdjList();
    g.bfsTraversal(0);
    g.dfsTraversal(0);

    return 0;
}