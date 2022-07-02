#include<iostream>

using namespace std;

	class node{

	public:
		int val;
		node* next;

		node(int val){
			this->val = val;
			this->next = NULL;
		}
	};
	
// void insertAtHead(int val, node*& head){ //passing by reference
// 	//1. create a new node dynamically 
// 	node* n = new node(val);
// 	//2. update the next field of the newly created node 
// 	//such that it points to the head of the linked list
// 	n->next = head;

// 	//3. make the newly created node as the new head of the linked list
// 	head = n;
// }

node* insertAtHead(int val, node* head){ //passing by reference
	//1. create a new node dynamically 
	node* n = new node(val);
	//2. update the next field of the newly created node 
	//such that it points to the head of the linked list
	n->next = head;

	//3. make the newly created node as the new head of the linked list
	head = n;
	return head;
}


void printLinkedList(node* head){ //if we pass head by reference, after printing the head will point to NULL
	while(head != NULL){ //while(head)
	cout << head->val << " ";
	head = head->next;
 }

 cout << endl;

}

node* getNode(int j, node* temp){

	int k = 0;
	while(temp != NULL and k<j){ //while(temp and k<j)
		temp = temp->next;
		k++;
	}

	return temp;
}

void insertAtIndex(int i, int val, node*& head){

	if(i == 0){
		insertAtHead(val, head);
		return;
	}

	node* prev = getNode(i-1, head);

	if(prev == NULL){ //i exceeds the length of the linked list
		return;
	}

	node* n = new node(val);

	n->next = prev->next;

	prev->next = n;
}

int main(){

	node* head = NULL;

	head = insertAtHead(50, head);
	head = insertAtHead(40, head);
	head = insertAtHead(30, head);
	head = insertAtHead(20, head);
	head = insertAtHead(10, head);
	head = insertAtHead(0, head);

	printLinkedList(head); //head represents the entire linked list

	insertAtIndex(2,25, head);

	printLinkedList(head);

	return 0;
}