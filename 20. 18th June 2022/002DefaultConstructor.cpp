#include<iostream>
#include<cstring>

using namespace std;

class Customer{

public: 

	char name[100];
	int age;
	char gender;
	double credits;

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

};

int main(){

	Customer c1;

	c1.age = 20;
	c1.gender = 'M';
	c1.credits = 100;
	strcpy(c1.name, "Pranav");

	///c1.printCustomerInfo();

	cout << endl;

	Customer c2;

	strcpy(c2.name, "Gaurav");
	c2.age = 22;
	c2.gender = 'M';
	c2.credits = 0;

	//c2.printCustomerInfo();

	return 0;
}