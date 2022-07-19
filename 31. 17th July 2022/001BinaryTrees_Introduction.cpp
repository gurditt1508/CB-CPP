#include<iostream>

using namespace std;

class node{

public:
	int data;
	node* left; //address of left child
	node* right; //address of right child

	node(int data){
		this->data = data;
		this->left = NULL;
		this->right = NULL;
	}

};

void printPreOrder(node* root){

	//base case
	if(!root){  //root == NULL
		cout << -1 << " "; //this is just for us
		return;
	}
	//recursive case
	cout << root->data << " ";

	//preorder traversal of leftsubtree
	printPreOrder(root->left);

	//preorder traversal of rightsubtree
	printPreOrder(root->right);
}

void in_order(node* root){

	if(!root){
		cout << -1 << " ";
		return;
	}

	in_order(root->left);
	cout << root->data << " ";
	in_order(root->right);

}

void post_order(node* root){

	if(!root){
		cout << -1 << " ";
		return;
	}

	post_order(root->left);

	post_order(root->right);

	cout << root->data << " ";	

}

int main(){

	node* root = NULL;

	root = new node(10);
	root->left = new node(20);
	root->right = new node(30);
	root->left->left = new node(40);
	root->left->right = new node(50);
	root->right->right = new node(60);
	root->left->right->left = new node(70);

	printPreOrder(root);

	cout << endl;

	in_order(root);

	cout << endl;

	post_order(root);

	cout << endl;

	return 0;
}