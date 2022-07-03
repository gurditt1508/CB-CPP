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
		cout << "inside default constructor. " << endl;
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

	Customer c2("Gaurav", 22, 'M', 0);
	c2.printCustomerInfo();
	
	Customer c3;

	return 0;
}