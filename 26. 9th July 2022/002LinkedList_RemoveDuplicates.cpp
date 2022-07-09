#include<iostream>

using namespace std;

class node{

	public:
		int val;
		node* next; //pointer to a node

		node(int val){
			this->val = val;
			this->next = NULL;
		}
	};

node* removeDuplicates(node* head){

	node* cur = head->next;
	node* prev = head;

	while(cur){
		if(cur->val != prev->val){
			prev->next = cur;
			prev = cur;
		}
		cur = cur->next;
	}

	prev->next = NULL;

	return head;
}

void insertAtHead(int val, node*& head){ 
	node* n = new node(val);
	n->next = head;
	head = n;
}


void printLinkedList(node* head){ //if we pass head by reference, after printing the head will point to NULL
	while(head != NULL){
	cout << head->val << " ";
	head = head->next;
 }

 cout << endl;

}

int main(){

	node* head = NULL;

	insertAtHead(5, head);
	insertAtHead(5, head);
	insertAtHead(4, head);
	insertAtHead(4, head);
	insertAtHead(3, head);
	insertAtHead(3, head);
	insertAtHead(2, head);
	insertAtHead(2, head);
	insertAtHead(1, head);

	printLinkedList(head); //head represents the entire linked list

	head = removeDuplicates(head);

	printLinkedList(head);

	return 0;
}