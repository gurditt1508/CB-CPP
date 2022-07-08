#include<iostream>

using namespace std;

int main() {

	// int* ptr = new int[5];

	// // for(int i=0; i<5; i++) {
	// // 	ptr[i] = i*10; // *(ptr + i) = i*10;
	// // }

	// for(int i = 0; i<5; i++){
	// 	cin >> ptr[i];
	// }

	// for(int i=0; i<5; i++) {
	// 	cout << ptr[i] << " "; // cout << *(ptr + i) << " ";
	// }

	// cout << endl;

	// delete[] ptr;

	int n = 5;

	int* ptr2 = new int[n]{10, 20, 30, 40, 50};

	for(int i=0; i<5; i++) {
		cout << ptr2[i] << " ";
	}

	cout << endl;

	delete[] ptr2;

	return 0;
}