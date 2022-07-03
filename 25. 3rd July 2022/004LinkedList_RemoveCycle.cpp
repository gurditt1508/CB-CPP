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

void printLinkedList(node* head){ //if we pass head by reference, after printing the head will point to NULL
	while(head != NULL){
	cout << head->val << " ";
	head = head->next;
 }

 cout << endl;

}


bool isCyclePresent(node* head){
	node* slow = head;
	node* fast = head;
	while(fast && fast->next){
		slow = slow->next;
		fast = fast->next->next;
		if(slow == fast){
			return true;
		}
	}

	return false;
}
	
void removeCycle(node* head){

}

int main(){

	node* head = new node(10);
	head->next = new node(20);
	head->next->next = new node(30);
	head->next->next->next = new node(40);
	head->next->next->next->next = new node(50);
	head->next->next->next->next->next = new node(60);
	head->next->next->next->next->next->next = new node(70);
	head->next->next->next->next->next->next->next = new node(80);
	head->next->next->next->next->next->next->next->next = head->next->next->next;

	//isCyclePresent(head) ? cout << "cycle is present." << endl : cout << "cycle is not present." << endl; 
	if(isCyclePresent(head)){
		removeCycle(head);
		printLinkedList(head);
	}else{
		printLinkedList(head)
	}

	return 0;
}