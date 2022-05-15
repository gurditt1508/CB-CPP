#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int n;
	cout << "enter number of strings: ";
	cin >> n;

	int inp[100];
	cin >> inp;

	int lar[100];
	strcpy(lar, inp);
	for(int i = 1; i<n; i++){
		cin >> inp;
		if(strcmp(inp, lar)){
			strcpy(lar, inp);
		}
	}
	cout << "largest string: " << lar << endl;
	return 0;
}