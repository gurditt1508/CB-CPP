#include<iostream>

using namespace std;

void f(){
	static int i = 0;
	int j = 0;
	i++;
	j++;
	cout << i << " " << j << endl;
}

int main(){
	
	f();
	f();
	f();

	return 0;
}