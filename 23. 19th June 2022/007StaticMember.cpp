#include<iostream>
#include<cstring>

using namespace std;

class Customer{

public: 

	const string id;
	string name;
	int age;
	static int count; //shared by all objects therefore also called class member

	Customer(string name, int age, string id): id(id){ //dont need this pointer here
		count++;
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

int Customer::count = 0;

int main(){

	Customer c1("Pranav", 20, "1234");
	Customer c2("Hargun", 18, "1234"); 
	Customer c3("Saurabh", 22, "1234"); 

	cout << Customer::count << endl;


	return 0;
}