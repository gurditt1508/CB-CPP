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

node* kRotate(node* head, int k){

	if(!head){	//empty linked list
		return head;
	}

	node* tail = head;
	int n = 1;
	while(tail->next){
		tail = tail->next;
		n++;
	}
	tail->next = head;

	node* newTail = head;
	for(int i = 0; i<(n-(k%n) -1); i++){
		newTail = newTail->next;
	}

	node* newHead = newTail->next;

	newTail->next = NULL;
	return newHead;

}
	
void insertAtHead(int val, node*& head){ 
	node* n = new node(val);
	n->next = head; //we could also write (*n).next = head;
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

	insertAtHead(50, head);
	insertAtHead(40, head);
	insertAtHead(30, head);
	insertAtHead(20, head);
	insertAtHead(10, head);

	printLinkedList(head); //head represents the entire linked list

	int k = 3;

	node* newHead = kRotate(head, k);

	printLinkedList(newHead);

	return 0;
}