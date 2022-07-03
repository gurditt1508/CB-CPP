#include<iostream>
#include<cstring>

using namespace std;

class Customer{

public: 

	char name[100];
	int age;
	char gender;
	double credits;

	void printCustomerInfo(){

		cout << "Customer Information " << endl
		<< "Name: " << name << endl
		<< "Age: " << age << endl
		<< "Gender: " << gender << endl
		<< "Credits: " << credits << endl;
	}

};

// void printCustomerInfo(Customer c){

// 		cout << "Customer Information " << endl
// 		<< "Name: " << c.name << endl
// 		<< "Age: " << c.age << endl
// 		<< "Gender: " << c.gender << endl
// 		<< "Credits: " << c.credits << endl;
// }

int main(){

	Customer c1;

	c1.age = 20;
	c1.gender = 'M';
	c1.credits = 100;
	strcpy(c1.name, "Pranav");

	//printCustomerInfo(c1);

	c1.printCustomerInfo();

	// cout << "Customer Information " << endl
	// 	<< "Name: " << c1.name << endl
	// 	<< "Age: " << c1.age << endl
	// 	<< "Gender: " << c1. gender << endl
	// 	<< "Credits: " << c1.credits << endl;

	cout << endl;

	Customer c2;

	strcpy(c2.name, "Gaurav");
	c2.age = 22;
	c2.gender = 'M';
	c2.credits = 0;

	//printCustomerInfo(c2);

	// cout << "Customer Information " << endl
	// 	<< "Name: " << c2.name << endl
	// 	<< "Age: " << c2.age << endl
	// 	<< "Gender: " << c2. gender << endl
	// 	<< "Credits: " << c2.credits << endl;

	c2.printCustomerInfo();

	return 0;
}