#include<iostream>
#include<cstring>

using namespace std;

class CreditCard{
	public:

		string cardNumber;
		string bankName;

		// CreditCard(){
		// 	cout << "Inside CreditCard's default constructor" << endl;
		// }

		CreditCard(string cn, string bn){
			cout << "Inside CreditCard's parameterised constructor" << endl;

			cardNumber = cn;
			bankName = bn;
		}
};

class Customer{

public: 

	string name;
	int age;
	CreditCard card; //member object (object of different class)

	Customer(string n, int a, string cn, string bn):name(n), age(a), card(cn, bn) { //member initialisation
		cout << "i am inside customer's parameterised constructor. " << endl;
		// name = n;
		// age = a;
		//here we are calling parameterised const. of credit card 
		//to initialise it
	}

	// Customer(){
	// 	cout << "inside default constructor. " << endl;
	// }

	void printCustomerInfo(){

		cout << "Customer Information " << endl
		<< "Name: " << name << endl
		<< "Age: " << age << endl;

	}

};

int main(){

	Customer c1("Pranav", 20, "1234-5678", "SBI"); //parameterised constructor
	c1.printCustomerInfo();

	return 0;
}