#include<iostream>
#include<cstring>

using namespace std;

class Customer{

	char* name;

public: 

	int age;
	char gender;
	double credits;

	Customer(char* n, int a, char g, double c){
		cout << "i am inside parameterised constructor. " << endl;
		name = new char[100];
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
		<< "Credits: " << credits << endl
		<< endl;
	}

	Customer(Customer& c){ //this is taking argument because we need c1's information
		cout << "inside copy constructor. " << endl;
		name = new char[100]; //will point to a new member in heap
							//for deep copy
		strcpy(name, c.name);
		age = c.age;
		gender = c.gender;
		credits = c.credits;
	}

	void setName(char* n){
		strcpy(name, n);
	}

	char* getName(){
		return name;
	}

	~Customer(){
		cout << "Inside the destructor of " << name << endl;
		delete[] name; //to release memory of dynamic members
	}

};

int main(){

	Customer c1("Pranav", 20, 'M', 100); //parameterised constructor
	c1.printCustomerInfo();

	Customer c2 = c1; //default copy constructor - shallow copy
	c2.printCustomerInfo();

	c2.setName("Sourav");
	cout << "c2.name: " << c2.getName() << endl;

	return 0;
}