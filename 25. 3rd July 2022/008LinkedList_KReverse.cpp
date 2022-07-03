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
	
node* insertAtHead(node* head, int val){ //passing by reference
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

node* kReverse(node* head, int k){

	if(!head){
		return head;
	}
	//reverse first k nodes of given L.L.
	node* prev = NULL;
	node* cur = head;
	int i = 0;
	while(cur and i<k){
		node* temp = cur->next;
		cur->next = prev;
		prev = cur;
		cur = temp;
		i++;
	}

	node* headFromMyFriend = kReverse(cur, k);
	head->next = headFromMyFriend;
	return prev;
}

int main(){
	node* head = NULL;
	insertAtHead(head, 80);
	insertAtHead(head, 70);
	insertAtHead(head, 60);
	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	int k = 3;

	head = kReverse(head, k);

	printLinkedList(head);
}