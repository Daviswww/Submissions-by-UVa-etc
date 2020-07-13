#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

enum Cmd { 
    insertx,
    deletex, 
    deleteFirst, 
    deleteLast
};

struct Node{
	int data;
    // 上一個節點
	Node* prev;
    // 下一個節點
	Node* next;
};

class ConnectedList{
public:
	ConnectedList(){
		motherNode = new Node();
		motherNode->data = -1;
		motherNode->prev = motherNode;	
		motherNode->next = motherNode;
	};
	~ConnectedList(){
		Node* tmpNode = motherNode->next;
		Node* nextNode;
		while(tmpNode != motherNode){
			nextNode = tmpNode->next;
			delete tmpNode;
			tmpNode = nextNode;
		}
		delete motherNode;
	};
	void insertNode(int x){
		Node* tmpNode = motherNode->next;
		motherNode->next = new Node();
		motherNode->next->data = x;
		motherNode->next->next = tmpNode;
		motherNode->next->prev = motherNode;
		tmpNode->prev = motherNode->next;
	};
	void deleteNode(int x){
		Node* tmpNode = motherNode->next;
		while(tmpNode != motherNode && tmpNode->data != x){
			tmpNode = tmpNode->next;
		}
		if(tmpNode != motherNode){	
			tmpNode->prev->next = tmpNode->next;
			tmpNode->next->prev = tmpNode->prev;
			delete tmpNode;
		}
	};

	void deleteFirst(){
		Node* tmpNode = motherNode->next;
		motherNode->next = motherNode->next->next;
		motherNode->next->prev = motherNode;
		delete tmpNode;	
	};

	void deleteLast(){
		Node* tmpNode = motherNode->prev;
		motherNode->prev = motherNode->prev->prev;
		motherNode->prev->next = motherNode;
		delete tmpNode; 
	};

	void showList(){
		Node* tmpNode = motherNode->next;
        int i = 0;
		while(tmpNode != motherNode){
            if(i++){
                printf(" %d",tmpNode->data);
            }else{
                printf("%d",tmpNode->data);
            }
			tmpNode = tmpNode->next;
		}
		printf("\n");
	}

private:
	Node* motherNode;
};

int main()
{
    ConnectedList doublyList;
    Cmd doubly;
    string s;
    int n, x;
    
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> s;
        if(s == "insert") {
            cin >> x;
            doubly = insertx;
        }else if(s == "delete") {
            cin >> x;
            doubly = deletex;
        }else if(s == "deleteFirst") {
            doubly = deleteFirst;
        }else if(s == "deleteLast") {
            doubly = deleteLast;
        }
        switch (doubly)
        {
        case 0:
            doublyList.insertNode(x);
            break;
        case 1:
            doublyList.deleteNode(x);
            break;
        case 2:
            doublyList.deleteFirst();
            break;
        case 3:
            doublyList.deleteLast();
            break;
        default:
            break;
        }
    }
    doublyList.showList();
    
    return 0;
}
