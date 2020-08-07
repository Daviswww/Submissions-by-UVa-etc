#include<iostream>
#include<vector>

using namespace std;
const int N = 30;
struct Node
{
    int pr;
    int left;
    int right;

    Node(){
        pr = -1;
        left = -1;
        right = -1;
    }
};
void Preorder(Node* tree, int key){
    if(key == -1){
        return;
    }
    printf(" %d", key);
    Preorder(tree, tree[key].left);
    Preorder(tree, tree[key].right);
}
void Inorder(Node* tree, int key){
    if(key == -1){
        return;
    }
    Inorder(tree, tree[key].left);
    printf(" %d", key);
    Inorder(tree, tree[key].right);
}
void Postorder(Node* tree, int key){
    if(key == -1){
        return;
    }
    Postorder(tree, tree[key].left);
    Postorder(tree, tree[key].right);
    printf(" %d", key);
}
int getRoot(Node* tree, int *node, int n){
    int root = 0;
    for(int i = 0; i < n; i++){
        if(tree[node[i]].pr == -1){
            root = node[i];
        }
    }
    return root;
}
int main()
{
    int n, key, left, right, root;
    int node[N] = {0};
    Node tree[N];
    for(int i = 0; i < n; i++){
        tree[i] = Node();
    }
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> key >> left >> right;
        
        tree[key].left = left;
        tree[key].right = right;
        tree[left].pr = key;
        tree[right].pr = key;
        node[i] = key;
    }
    root = getRoot(tree, node, n);
    cout << "Preorder" << endl;
    Preorder(tree, root);
    cout << endl << "Inorder" << endl;
    Inorder(tree, root);
    cout << endl << "Postorder" << endl;
    Postorder(tree, root);
    cout << endl;

    return 0;
}
