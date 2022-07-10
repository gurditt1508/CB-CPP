#include<iostream>
using namespace std;

template <typename T>
class stack{

	int t; //represents index of top-most element in the stack inside the array that internally represents stack
	T* arr;
	int n; //max. capacity of the stack

public:
	stack(int n){

		arr = new T[n];
		t = -1;
		this->n = n;
	}

	void push(T val){

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

	T top(){
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

	stack<string> s(5);

	cout << s.size() << endl;
	cout << s.empty() << endl;

	s.push("abc");
	s.push("ghi");
	s.push("jkl");
	s.push("mno");
	s.push("pqr");

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