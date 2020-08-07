#include<iostream>
#include<queue>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;
};

Node* createNode(int key) {
    Node* node = new Node();
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    return node;
}

Node* search(Node* root, int key) {
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        if(temp->key == key) return temp;
        if(temp->left != NULL) q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right);
    }
    return NULL;
}

void insertNode(Node *root, int parent, int left, int right) {
    Node *nodeToInsertLeft = createNode(left);
    Node *nodeToInsertRight = createNode(right); 
    Node *node = search(root, parent);
    if(left != -1) {
        node->left = nodeToInsertLeft;
    }
    if(right != -1) {
        node->right = nodeToInsertRight;
    }
    return;
}

void Preorder(Node* node){
    if(node == NULL){
        return;
    }
    printf("%d ", node->key); 
    Preorder(node->left);
    Preorder(node->right);    
}

void Inorder(Node* node){
    if(node == NULL){
        return;
    }
    Inorder(node->left);
    printf("%d ", node->key);
    Inorder(node->right);
}

void Postorder(Node* node){
    if(node == NULL){
        return;
    }
    Postorder(node->left);
    Postorder(node->right);
    printf("%d ", node->key); 
}

int main() {
    Node* root = createNode(0);
    int n, key, left, right;
    
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> key >> left >> right;
        insertNode(root, key, left, right);
    }
    
    cout << "Preorder" << endl;
    Preorder(root);
    cout << endl << "Inorder" << endl;
    Inorder(root);
    cout << endl << "Postorder" << endl;
    Postorder(root);
    cout << endl;

    return 0;
}