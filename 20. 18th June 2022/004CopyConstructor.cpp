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

	Customer(Customer& c){ //this is taking argument because we need c1's information
		cout << "inside copy constructor. " << endl;
		strcpy(name, c.name);
		age = c.age;
		gender = c.gender;
		credits = c.credits;
	}

	void printCustomerInfo(){

		cout << "Customer Information " << endl
		<< "Name: " << name << endl
		<< "Age: " << age << endl
		<< "Gender: " << gender << endl
		<< "Credits: " << credits << endl;
	}

};

int main(){

	Customer c1("Pranav", 20, 'M', 100); //parameterised constructor
	c1.printCustomerInfo();

	Customer c2 = c1; //or Customer c2(c1)
						//invokes default copy constructor
	c2.printCustomerInfo();

	return 0;
}