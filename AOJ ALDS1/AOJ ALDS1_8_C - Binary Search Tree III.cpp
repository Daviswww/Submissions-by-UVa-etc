#include<iostream>
#include<algorithm>
#include<cstdio>
#include<queue>
#include<stack>
#include<string>

using namespace std;

const int N = 100;
struct Node{
    int key;
    int parent;
    Node *left;
    Node *right;
};

Node* createNode(int key){
    Node* node = new Node();
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    return node;
}

Node* search(Node* root, int key){
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        if(key == temp->key){
            return temp;
        }else if(key > temp->key){
            if(temp->right != NULL) {
                q.push(temp->right);
            }
        }else{
            if(temp->left != NULL) {
                q.push(temp->left);
            }
        }
    }
    return NULL;
}

void inorder(Node* node){
    if(node == NULL){
        return;
    }
    inorder(node->left);
    printf(" %d", node->key);
    inorder(node->right);
}

void preorder(Node* node){
    if(node == NULL){
        return;
    }
    printf(" %d", node->key);
    preorder(node->left);
    preorder(node->right);
}

void insert(Node *root, int key){
    Node *newNode = createNode(key);

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node *temp = q.front();
        q.pop();

        if(key > temp->key){
            if(temp->right != NULL) {
                q.push(temp->right);
            }else{
                temp->right = newNode;
            }
        }else{
            if(temp->left != NULL) {
                q.push(temp->left);
            }else{
                temp->left = newNode;
            }
        }
    }
    return ;
}
<<<<<<< Updated upstream


Node* remove(Node* root, int v)
{
	if (!root){
        return NULL;
    }
    if (root->key > v){
        root->left = remove(root->left, v);
    }else if (root->key < v){
        root->right = remove(root->right, v);
    }else {
		if (!root->left || !root->right){
			root = (root->left) ? root->left : root->right;
		}else {
			Node* temp = root->right;
			while (temp->left){
                temp = temp->left;
            }
			root->key = temp->key;
			root->right = remove(root->right, temp->key);
		}
	}
	return root;
}

=======
void remove(Node *root, int key){
    Node *node = search(root, key);
    node = NULL;
    return ;
}
>>>>>>> Stashed changes
int main()
{
    int n, key;
    string s;

    cin >> n;
    cin >> s >> key;

    Node *root = createNode(key);
    for(int i = 1; i < n; i++){
        cin >> s;
        if(s == "insert"){
            cin >> key;
            insert(root, key);
        }else if(s == "find"){
            cin >> key;
            if(search(root, key) != NULL){
                cout << "yes" << endl;
            }else{
                cout << "no" << endl;
            }
        }else if(s == "delete"){
            cin >> key;
<<<<<<< Updated upstream
            root = remove(root, key);
=======
            remove(root, key);
>>>>>>> Stashed changes
        }else{
            inorder(root);
            puts("");
            preorder(root);
            puts("");
        }
    }
    return 0;
}