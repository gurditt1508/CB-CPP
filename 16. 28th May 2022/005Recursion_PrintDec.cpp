#include<iostream>

using namespace std;

void f(int m){
	if(m == 0){
		return;
	}

	cout << m << " ";
	f(m-1);
}

int main(){

	int m = 5;
	f(m);

	return 0;
}