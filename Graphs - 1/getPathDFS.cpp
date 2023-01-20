/*

Code : Get Path - DFS

Given an undirected graph G(V, E) and two vertices v1 and v2(as integers), find and print the path from v1 to v2 (if exists). Print nothing if there is no path between v1 and v2.
Find the path using DFS and print the first path that you encountered. 

Note:
1. V is the number of vertices present in graph G and vertices are numbered from 0 to V-1. 
2. E is the number of edges present in graph G.
3. Print the path in reverse order. That is, print v2 first, then intermediate vertices and v1 at last.
4. Save the input graph in Adjacency Matrix.

Input Format :
The first line of input contains two integers, that denote the value of V and E.
Each of the following E lines contains two integers, that denote that there exists an edge between vertex 'a' and 'b'.
The following line contain two integers, that denote the value of v1 and v2.

Output Format :
Print the path from v1 to v2 in reverse order.

Constraints :
2 <= V <= 1000
1 <= E <= (V * (V - 1)) / 2
0 <= a <= V - 1
0 <= b <= V - 1
0 <= v1 <= 2^31 - 1
0 <= v2 <= 2^31 - 1

Time Limit: 1 second

Sample Input 1 :
4 4
0 1
0 3
1 2
2 3
1 3

Sample Output 1 :
3 0 1

Sample Input 2 :
6 3
5 3
0 1
3 4
0 3

*/

#include <iostream>
#include<vector>
using namespace std;


bool getpath ( int ** graph , int v , bool* visited , int s , int e , vector<int> & res)
{
    if( s ==e)
    { res.push_back(s);
       return true;
    }
    
    
    
 /*   if(graph[s][e]==1) 
    { res.push_back(e);
     res.push_back(s);
     return true;
    }*/
    
    
    visited[s]=true;

    bool ans =false;

    for(int i=0 ;i<v ;i++)
    {		
        if(!visited[i] && graph[s][i]==1)
            ans=getpath(graph,v,visited,i,e,res);
        if( ans== true)
        {
            res.push_back(s);
            return true;
        }

    }

    return ans;
}


int main()
{
    int V, E, tempX, tempY;
    cin >> V >> E;

    int** graph = new int * [V];

    for(int i=0 ;i <V ;i++)
    {
        graph[i]=new int[V];
        for( int j=0 ;j<V ;j++)
            graph[i][j]=0; 
    }

    for(int i=0 ;i< E ;i++)
    {
        int x,y; 
        cin>>x>>y;
        graph[x][y]=1;
        graph[y][x]=1;
    }
    bool * visited=new bool[V];
    for(int i=0 ;i< V;i++)
        visited[V]= false;

    int s , e ;
    cin>> s>> e;

    vector <int> res;

    if(getpath( graph , V , visited , s, e, res ))
        for(auto i : res )
            cout<< i <<" ";





    delete []  visited;
    for(int i = 0 ;i <V ;i++)
        delete [] graph[i];

    delete[] graph;



    return 0;
}

/*

#include<iostream>
#include<vector>
using namespace std;

vector<int> *getPathHelper(int **edges, int v, int sv, int ev, bool *visited) {

if (sv == ev) {

    vectors<int> *output = new vector<int>();
    output -> push_back(ev);
    return output;

}

visited[sv] = true;

    for (int i = 0; i < v; i++) {

        if (edges[sv][i] && !visited[i]) {

            vector<int> *smallOutput = getPathHelper(edges, n, i, ev, visited);

        if (smallOutput != NULL) {

            smallOutput -> push_back(sv);
            return smallOutput;

        }

      } 

    }

    return NULL;

}

vector<int> *getDFSPath (bool **graph, int v, int start, int end) {

bool *visited = new bool[v];

for (int i = 0; i < v; i++) {

        visited[i] = false;

}

vector<int> *output = getDFSPathHelper(graph, v, start, end, visited);

delete[] visited;

return output;

}

int main() {

int n;
int e;
cin >> n >> e;
int **edges = new int[v];

    for (int i = 0; i < v; i++) {

        edges[i] = new int[v]();

    for (int j = 0; j < v; j++) {

        graph[i] = new bool[v]();

        }

    }

for (int i = 0, a, b; i < e; ++i) {

    cin >> a >> b;
    graph[a][b] = true;
    graph[b][a] = true;

}

int start, end;
cin >> start >> end;

vector<int> *output = getDFSPath(graph, v, start, end);

if (output != NULL) {
    for (int i = 0; i < output -> size(); ++i) {

            cout << output -> at[i] << " ";

    }

        delete output;

}

    for (int i = 0; i < v; ++i) {

        delete[] graph[i];

    }

delete[] graph;

}

*/