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

void Preorder(Node* root) {
    queue<Node*> q;
    q.push(root);
    cout << "Preorder" << endl;
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        cout << " " << temp->key;
        if(temp->left != NULL) q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right);
    }
    cout << endl;
    return ;
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
    
    Preorder(root);

    return 0;
}