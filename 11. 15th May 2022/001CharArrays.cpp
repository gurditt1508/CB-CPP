#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char str1[] = {'A', 'B', 'C', '\0'}; //terminating char-array with null character
	cout << str1 << endl; //here name of the array is a character pointer

	char str2[] = "DEF"; //string literal, c++ automatically adds null character
	cout << str2 << endl; 

	char str3[] = "hello";
	for(int i = 0; str3[i] != '\0'; i++){ //printing elements individually
		cout << str3[i] << endl;
	}
	int count = 0;
    for(int i = 0; str3[i] != '\0'; i++){
    	count++;
    }
    cout << count << endl;
    cout << strlen(str3) << endl; 
	return 0;
}