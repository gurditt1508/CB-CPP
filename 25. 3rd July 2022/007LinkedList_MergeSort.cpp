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


node* mergeSort(node* head){
	node* head1 = head;

	node* midPoint = getMidPoint(head);
	node* head2 = midPoint->next;
	midPoint->next = NULL;

	head1 = mergeSort(head1);
	head2 = mergeSort(head2);

	head = merge(head1, head2);

	return head;
}

int main(){
	node* head = NULL;

	insertAtHead(head,10);
	insertAtHead(head,10);
	insertAtHead(head,10);
	insertAtHead(head,10);
	insertAtHead(head,10);
	insertAtHead(head,10);

	printLinkedList(head);

	head = mergeSort(head);

	printLinkedList(head);

}