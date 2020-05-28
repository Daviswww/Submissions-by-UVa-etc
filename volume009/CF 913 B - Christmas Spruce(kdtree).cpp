#include<iostream>
#include<queue>
#include<vector>
using namespace std;

struct Node{
    int key;
    int works;
    vector<Node *> child; 
};

Node* createNode(int key){
    Node* node = new Node();
    node->key = key;
    node->works = 0;
    return node;
}
void insert(Node *root, int parent, int key) 
{ 
    Node *nodeToInsert = createNode(key);
    queue<Node*> q;
    q.push(root);
    if(parent == 1){
        (root->child).push_back(nodeToInsert);
        return;
    }
    while(!q.empty()){
        Node *temp = q.front();
        int work = 1;
        q.pop();
        for(int i = 0; i < temp->child.size(); i++){
            if(temp->child[i]->key == parent){
                temp->works = work;
                (temp->child[i]->child).push_back(nodeToInsert);
                return;
            }
            if(!temp->child[i]->child.empty()){
                work++;
                q.push(temp->child[i]);
            }
        }
    }
} 
bool search(Node *root){
    int count = 0;
    queue<Node*> q;
    q.push(root);
    count = root->child.size() - root->works;
    // cout << root->key << " : "  << root->child.size() << " : " << root->works << endl;
    if(root->works > 0 && count < 3){
        return false;
    }
    if((count > 0 && count  < 3)){
        return false;
    }
    while(!q.empty()){
        Node *temp = q.front();
        q.pop();
        for(int i = 0; i < temp->child.size(); i++){
            // cout << temp->child[i]->key << " : " << temp->child[i]->child.size() << " : " << temp->child[i]->works << endl;
            count = temp->child[i]->child.size() - temp->child[i]->works;
            if(temp->child[i]->works > 0 && count < 3){
                return false;
            }
            if(count > 0 && count  < 3){
                return false;
            }
            if(!temp->child[i]->child.empty()){
                q.push(temp->child[i]);
            }
        }
    }
    return true;
}

int main()
{
    int n, tmp;
    Node *root = createNode(1);
    cin >> n;
    for(int i = 2; i <= n; i++){
        cin >> tmp;
        insert(root, tmp, i);
    }
    if(search(root)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}

/*
13
1
2
2
2
1
6
6
6
1
10
10
10
*/