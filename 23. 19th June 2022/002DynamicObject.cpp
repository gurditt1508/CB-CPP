#include<iostream>
#include<cstring>

using namespace std;

class Customer{

public: 

	string name;
	int age;

	Customer(string n, int a){ //member initialisation
		cout << "I am inside Customer's parameterised constructor. " << endl;
		name = n;
		age = a;
		//here we are calling parameterised const. of credit card 
		//to initialise it
	}

	Customer(){
		cout << "Inside Customer's default constructor. " << endl;
	}

	void printCustomerInfo(){

		cout << "Customer Information " << endl
		<< "Name: " << name << endl
		<< "Age: " << age << endl;

	}

};

int main(){

	//Customer* cptr1 = new Customer; //dynamic member (default constructor)
	Customer* cptr2 = new Customer("Pranav", 20); //parameterised constructor is invoked

	// cout << "name: " << (*cptr2).name << endl; //dereferencing pointer
	// cout << "age: " << (*cptr2).age << endl;

	// (*cptr2).printCustomerInfo();


	// cout << "name: " << cptr2->name << endl; //dereferencing pointer
	// cout << "age: " << cptr2->age << endl;

	cptr2->printCustomerInfo();

	return 0;
}