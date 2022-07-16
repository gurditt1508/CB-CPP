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
	while(head != NULL){
	cout << head->val << " ";
	head = head->next;
 }

 cout << endl;

}

int length(node* head){
	int count = 0;
	while(head){
		count++;
		head = head->next;
	}
	return count;
}

int lengthRecursive(node* head){

	if(!head){ //empty linked list i.e. no. of nodes = 0
		return 0;
	}
	//recursive case
	int X = lengthRecursive(head->next);

	return X+1;
}

int main(){

	node* head = NULL;

	head = insertAtHead(50, head);
	head = insertAtHead(40, head);
	head = insertAtHead(30, head);
	head = insertAtHead(20, head);
	head = insertAtHead(10, head);

	printLinkedList(head); //head represents the entire linked list

	cout << length(head) << endl;

	cout << lengthRecursive(head) << endl;

	return 0;
}