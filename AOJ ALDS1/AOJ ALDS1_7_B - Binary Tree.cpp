#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;
const int N = 100;
struct Node {
    int parent;
    int left;
    int right;
    int key;
    //output
    int sibling;
    int degree;
    int depth;
    int height;

    Node(){
        parent = -1;
        sibling = -1;
        degree = 0;
        depth = 0;
        height = 0;
    }
};
int dfs(Node *tree, int key);
void depth(Node *tree, int key);
void print(Node node, int i);
int main()
{
    int n, id, left, right, root;
    Node tree[N];

    cin >> n;
    for(int i = 0; i < n; i++){
        tree[id] = Node();
    }
    for(int i = 0; i < n; i++)
    {
        cin >> id >> left >> right;
        tree[id].left = left;
        tree[id].right = right;
        if(tree[id].left != -1 && tree[id].right != -1) {
            tree[left].sibling = right;
            tree[right].sibling = left;
        }
        if(left != -1) {
            tree[id].degree++;
            tree[left].parent = id;
        }
        if(right != -1) {
            tree[id].degree++;
            tree[right].parent = id;
        }
    }
    for(int i = 0; i < n; i++){
        tree[i].height = dfs(tree, i);
        if(tree[i].parent == -1){
            depth(tree, i);
        }
    }
    for(int i = 0; i < n; i++){
        print(tree[i], i);
    }
    return 0;
}

int dfs(Node *tree, int key) 
{ 
    if (tree[key].left == -1 && tree[key].right == -1) {
        return 0;
    }
    if (tree[key].left == -1) {
        return dfs(tree, tree[key].right) + 1; 
    }
    if (tree[key].right == -1) {
        return dfs(tree, tree[key].left) + 1; 
    }
    
    return max(dfs(tree, tree[key].left), dfs(tree, tree[key].right)) + 1; 
} 

void depth(Node *tree, int key){
    if(tree[key].parent != -1){ 
        tree[key].depth = tree[tree[key].parent].depth + 1;
    }
    if(tree[key].left != -1){
        depth(tree, tree[key].left);
    }
    if(tree[key].right != -1){
        
        depth(tree, tree[key].right);
    }
    return;
}

void print(Node node, int i){
    printf("node %d: parent = %d, sibling = %d, degree = %d, depth = %d, height = %d, ", i, node.parent, node.sibling, node.degree, node.depth, node.height );
    if(node.parent == -1){
        cout << "root" << endl;
    }else if(node.degree > 0){
        cout << "internal node" << endl;
    }else{
        cout << "leaf" << endl;
    }
}