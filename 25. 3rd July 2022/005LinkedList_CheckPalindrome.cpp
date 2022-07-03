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
	node* n = new node(val);

	n->next = head;

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

node* getMidPoint(node* head){
	if(!head){ //empty linked list
		return head;
	}

	node* slow = head;
	node* fast = head->next;

	while(fast and fast->next){
		slow = slow->next;
		fast = fast->next->next;

	}

	return slow;
}


bool isPalindrome(node* head){
	node* midPoint = getMidPoint(head);
	node* head2 = midPoint->next;

	midPoint->next = NULL;

	head2 = reverse(head2);
	while(head2){
		
	}
}

int main(){

	node* head = NULL;

	head = insertAtHead(10, head);
	head = insertAtHead(20, head);
	head = insertAtHead(30, head);
	head = insertAtHead(30, head);
	head = insertAtHead(20, head);
	head = insertAtHead(10, head);

	printLinkedList(head); //head represents the entire linked list


	return 0;
}