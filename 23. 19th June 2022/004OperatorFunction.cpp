#include<iostream>
#include<cstring>

using namespace std;

class Customer{

public: 

	string name;
	int age;
	Customer(string name, int age){ //member initialisation
		cout << "i am inside customer's parameterised constructor. " << endl;
		this->name = name;
		this->age = age;
	}

	Customer(){
		cout << "inside default constructor. " << endl;
	}

	void printCustomerInfo(){

		cout << "Customer Information " << endl
		<< "Name: " << name << endl
		<< "Age: " << age << endl;

	}

	bool operator>(Customer c){ //here c is Gaurav (c2)
		return age > c.age;
	}

};

int main(){

	Customer c1("Pranav", 20); //parameterised constructor
	c1.printCustomerInfo();

	Customer c2("Gaurav", 22);
	c2.printCustomerInfo();

	if(c1 > c2){ //c1.operator>(c2)
		cout << "Pranav is greater than Gaurav" << endl;
	}else{
		cout << "Gaurav is greater than Pranav" << endl;
	}

	return 0;
}