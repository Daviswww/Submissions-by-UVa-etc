#include<iostream>
#include<cstdlib>
#include<cstdio>

using namespace std;

class List{
	private:
		typedef struct node{
			int data;
			node* next;
		}* nodePtr;
			
		nodePtr head;
		nodePtr curr;
		nodePtr temp;
		
	public:
		List();
		
		void AddNode(int addData);
		void DeleteNode(int delData);
		void PrintList();
};

List::List(){
	head = NULL;
	curr = NULL;
	temp = NULL;
}

void List::AddNode(int addData){
	nodePtr n = new node;
	n->next = NULL;
	n->data = addData;
	
	if(head != NULL)
	{
		curr = head;
		while(curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = n;
	}
	else
	{
		head = n;
	}
}

void List::DeleteNode(int delData){
	nodePtr delPtr = NULL;
	temp = head;
	curr = head;
	while(curr != NULL && curr->data != delData)
	{
		temp = curr;
		curr = curr->next;
		
	}
	if(curr == NULL)
	{
		cout << delData <<" was not in the list\n";
		delete delPtr;
	}
	else
	{
		delPtr = curr;
		curr = curr->next;
		temp->next = curr;
		if(delPtr == head)
		{
			head = head->next;
			temp = NULL;
		}
		delete delPtr;
		cout << "The value "<< delData << " was deleted\n";
	}
}

void List::PrintList(){
	curr = head;
	while(curr != NULL)
	{
		cout << curr->data << endl;
		curr = curr->next;
	}
}
int main(void)
{
	List Paul;
	
	Paul.AddNode(3);
	Paul.AddNode(5);
	Paul.AddNode(7);
	Paul.PrintList();
	
	Paul.DeleteNode(3);
	Paul.PrintList();
	
	
	
	return 0;
}
