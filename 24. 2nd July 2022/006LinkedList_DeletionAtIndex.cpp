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
	
void insertAtHead(int val, node*& head){ //passing by reference
	//1. create a new node dynamically 
	node* n = new node(val);
	//2. update the next field of the newly created node 
	//such that it points to the head of the linked list
	n->next = head;

	//3. make the newly created node as the new head of the linked list
	head = n;
}

// node* insertAtHead(int val, node* head){ //passing by reference
// 	//1. create a new node dynamically 
// 	node* n = new node(val);
// 	//2. update the next field of the newly created node 
// 	//such that it points to the head of the linked list
// 	n->next = head;

// 	//3. make the newly created node as the new head of the linked list
// 	head = n;
// 	return head;
// }

void deleteAtHead(node*& head) {

	if(!head) { // head == NULL
		// linked list is empty
		return;
	}

	node* temp = head;
	head = head->next;
	delete temp;
}

node* getNode(int j, node* temp){

	int k = 0;
	while(temp != NULL and k<j){ //while(temp and k<j)
		temp = temp->next;
		k++;
	}

	return temp;
}


void printLinkedList(node* head){ //if we pass head by reference, after printing the head will point to NULL
	while(head != NULL){ //while(head)
		cout << head->val << " ";
		head = head->next;
 	}

 	cout << endl;

}

void deleteAtTail(node*& head) {

	if(!head) { //  head == NULL
		// linked list is empty
		return;
	}

	if(!head->next) { // head->next == NULL
		// linked list has a single node
		deleteAtHead(head);
		return;
	}

	node* prev = NULL;
	node* tail = head;

	while(tail->next) { // tail->next != NULL
		prev = tail;
		tail = tail->next;
	}

	prev->next = NULL;
	delete tail;

}


void deleteAtIndex(int i, node* head){

	if(i == 0){
		//**deleteAtHead(head);
		//return;
	}

	node* prev = getNode(i-1, head);

	if(prev == NULL){ //you are trying to delete at an invalid index
		return;
	}
	node* cur = getNode(i, head);

	if(!cur){	//you are trying to delete at an invalid index
		return;
	}

	prev->next = cur->next;

	delete cur;
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

	deleteAtIndex(2,head);

	printLinkedList(head);

	deleteAtIndex(0, head);

	printLinkedList(head);

	return 0;
}