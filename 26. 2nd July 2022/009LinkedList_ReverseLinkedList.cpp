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

node* reverse(node* head){
	node* prev = NULL;
	node* cur = head;

	while(cur){
		node* temp = cur->next;
		cur->next = prev;
		prev = cur;
		cur = temp;
	}
	return prev;
}

node* reverseRecursive(node* head){

	//base case
	// if(!head){
	// 	return NULL;
	// }

	// if(!head->next){ //head->next == NULL
	// 	return head;
	// }
	if(!head || !head->next){ //merging the two base cases
		return head;
	}

	//recursive case
	node* revHead = reverseRecursive(head->next);
	head->next->next = head;
	head->next = NULL;

	return revHead;
}

int main(){

	node* head = NULL; //initially empty

	head = insertAtHead(50, head);
	head = insertAtHead(40, head);
	head = insertAtHead(30, head);
	head = insertAtHead(20, head);
	head = insertAtHead(10, head);

	printLinkedList(head); //head represents the entire linked list

	head = reverseRecursive(head);

	printLinkedList(head);

	return 0;
}