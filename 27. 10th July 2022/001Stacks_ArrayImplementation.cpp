#include<iostream>
using namespace std;

class stack{

	int t; //represents index of top-most element in the stack inside the array that internally represents stack
	int* arr;
	int n; //max. capacity of the stack

public:
	stack(int n){

		arr = new int[n];
		t = -1;
		this->n = n;
	}

	void push(int val){

		if(t == n-1){ //stack overflow
			cout << "stack overflow. " << endl;
			return;
		}
		t = t+1;
		arr[t] = val;

	}

	void pop(){

		if(t == -1){
			return;
		}
		t = t-1;
	}

	int top(){
		return arr[t];
	}

	int size(){
		return t+1;
	}

	bool empty(){
		return t == -1;
	}

};

int main(){

	stack s(5);

	cout << s.size() << endl;
	cout << s.empty() << endl;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	cout << s.size() << endl;
	cout << s.top() << endl;

	s.pop();

	cout << s.top() << endl;
	cout << s.size() << endl;

	s.pop();

	cout << s.top() << endl;
	cout << s.size() << endl;

	s.pop();

	cout << s.top() << endl;
	cout << s.size() << endl;

	s.pop();

	cout << s.top() << endl;
	cout << s.size() << endl;

	s.pop();

	//cout << s.top() << endl;
	cout << s.size() << endl;

	return 0;
}