#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
const int N = 100005;

struct Node
{
    string type;
    int parent;
    int depth;
    vector<int> internalNode;
};

void print(Node *graph, int n);

int main()
{
    int n, index, k, tmp;
    Node graph[N];
    cin >> n;
    for(int i = 0; i < n; i++){
        graph[i].parent = -1;
    }
    for(int i = 0; i < n; i++){
        cin >> index >> k;
        graph[index].depth = graph[graph[index].parent].depth + 1;
        for(int j = 0; j < k; j++){
            cin >> tmp;
            graph[index].internalNode.push_back(tmp);
            graph[tmp].parent = index;
            graph[tmp].depth = graph[graph[tmp].parent].depth + 1;
        }
        if(k){
            graph[index].type = "internal node";
        }else{
            graph[index].type = "leaf";
        }
    }
    print(graph, n);

    return 0;
}

void print(Node *graph, int n){
    for(int i = 0; i < n; i++){
        if(graph[i].parent == -1){
            graph[i].type = "root";
        }
        printf("node %d: parent = %d, depth = %d, ", i, graph[i].parent, graph[i].depth-1);
        cout <<  graph[i].type << ", [";
        for(int j = 0; j < graph[i].internalNode.size(); j++){
            if(j){
                printf(", %d", graph[i].internalNode[j]);
            }else{
                printf("%d", graph[i].internalNode[j]);
            }
        }
        printf("]\n");
    }
}