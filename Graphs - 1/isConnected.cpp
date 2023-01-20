#include<iostream>
using namespace std;

void DFS(bool **grapoh, int v, bool *visited, int currentVertex) {

    visited[currentVertex] = true;

    for(int i = 0; i < v; i++) {

        if(graph[currentVertex][i] && !visited[i]) {

            DFS(graph, v, visited, i);

        }

    }

}

bool isConnected(bool **graph, int v) {

    bool *visited = new bool[v]();
    DFS(graph, v, visited, 0);

    for(int i = 0; i < v; i++) {

        if(!visited[i]) {

            return false;

        }

    }

    return true;

}


int main() {

    int v, e;
    cin >> v >> e;

    bool **graph = new bool*[v];

    for(int i = 0; i < v; i++) {

        graph[i] = new bool[v]();

    }

    for(int i = 0, a, b; i < e; i++) {

        cin >> a >> b;
        graph[a][b] = true;
        graph[b][a] = true;

    }

    cout << (isConnected(graph, v) ? "true" : "false");

    for(int i = 0; i < v; i++) {

        delete [] graph[i];

    }

    delete [] graph;

}