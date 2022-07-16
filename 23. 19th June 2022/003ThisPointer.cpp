#include<iostream>
#include<cstring>

using namespace std;

class Customer{

public: 

	string name;
	int age;

	Customer(string name, int age){ //member initialisation
		cout << "I am inside Customer's parameterised constructor. " << endl;
		this->name = name; //this refers to the object on which the fn. is called
		this->age = age; //if we don't write "this", this is the same 
						//as writing int x; x = x;
	}

	Customer(){
		cout << "Inside Customer's default constructor. " << endl;
	}

	void printCustomerInfo(){

		cout << "Customer Information " << endl
		<< "Name: " << this->name << endl //can also do (*this).name 
		<< "Age: " << this->age << endl;

	}

	bool isSame(Customer* cptr){
		return cptr == this;
	}

};

int main(){

	Customer* cptr = new Customer("Pranav", 20); //parameterised constructor is invoked
	cptr->printCustomerInfo();

	cptr->isSame(cptr) ? cout << "true." << endl:
						cout << "false" << endl;

	Customer* cptr2 = new Customer("Gaurav", 22);
	cptr->isSame(cptr2) ? cout << "true." << endl:
						cout << "false" << endl;


	return 0;
}