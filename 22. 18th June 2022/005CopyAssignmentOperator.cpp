#include<iostream>
#include<cstring>

using namespace std;

class Customer{

public: 

	char name[100];
	int age;
	char gender;
	double credits;

	Customer(char* n, int a, char g, double c){
		cout << "i am inside parameterised constructor. " << endl;
		strcpy(name, n);
		age = a;
		gender = g;
		credits = c;
	}

	Customer(){
		cout << "inside default constructor" << endl;
	}

	void printCustomerInfo(){

		cout << "Customer Information " << endl
		<< "Name: " << name << endl
		<< "Age: " << age << endl
		<< "Gender: " << gender << endl
		<< "Credits: " << credits << endl;
	}

	// Customer(Customer& c){ //this is taking argument because we need c1's information
	// 	cout << "inside copy constructor. " << endl;
	// 	strcpy(name, c.name);
	// 	age = c.age;
	// 	gender = c.gender;
	// 	credits = c.credits;
	// }

	void operator=(Customer c){
		cout << "inside copy assignment operator" << endl;
		strcpy(name, c.name);
		age = c.age;
		gender = c.gender;
		credits = c.credits;

	}

};

int main(){

	Customer c1("Pranav", 20, 'M', 100); //parameterised constructor
	c1.printCustomerInfo();

	cout << endl;

	Customer c2; //default constructor
	c2 = c1; //default copy assignment copy operator fn
	//we can also write c2.operator=(c1);
	c2.printCustomerInfo();

	return 0;
}