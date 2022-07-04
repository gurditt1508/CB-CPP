#include<iostream>
#include<cstring>

using namespace std;

class Customer{

public: 

	const string id;
	string name;
	int age;
	Customer(string name, int age, string id): id(id){ //dont need this pointer here
		cout << "i am inside customer's parameterised constructor. " << endl;
		this->name = name;
		this->age = age;
		//this->id = id; //this will give error
	}

	void printCustomerInfo() const{ //constant member f

		cout << "Customer Information " << endl
		<< "Name: " << name << endl
		<< "Age: " << age << endl
		<<"ID: " << id << endl;

	}

};

int main(){

	Customer c1("Pranav", 20, "1234"); //parameterised constructor
	c1.printCustomerInfo();


	return 0;
}