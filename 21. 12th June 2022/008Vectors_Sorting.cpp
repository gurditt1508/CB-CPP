#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool myGreaterComparator(int a, int b){ //could write customer a, customer b
	//return true when swap is not needed
	return a<b; //works like less<int>
	//return a>b; //works like greater<int>
}

int main(){

	//create a vector using initialiser list
	vector<int> v = {1,0,2,4,3};
	cout << "size: " << v.size() << endl;
	int n = v.size();

	for(int i = 0; i<n; i++){
		cout << v[i] << " ";
	} 

	cout << endl;

	//reverse a vector
	// reverse(v.begin(), v.end());

	// for(int i = 0; i<n; i++){
	// 	cout << v[i] << " ";
	// }

	// cout << endl;

	sort(v.begin(), v.end(), less<int>()); //less<int> is there by default
	for(int i = 0; i<n; i++){
		cout << v[i] << " ";
	}

	cout << endl;

	//sorting in decreasing order
	vector<int> v2 = {30,20,0,10,60,50};
	//1. using rbegin() and rend() 
	// sort(v2.rbegin(), v2.rend());
	// for(int i = 0; i<v2.size(); i++){
	// 	cout << v2[i] << " ";
	// }
	//cout << endl;
	//2. using greater<int>

	// sort(v2.begin(), v2.end(), greater<int>()); //built-in comparator
	// 											//sorts in decreasing order

	// for(int i = 0; i<v2.size(); i++){
	// 	cout << v2[i] << " ";
	// }

	// cout << endl;

	//3. using custom comparator
	sort(v2.begin(), v2.end(), myGreaterComparator); //to sort objects
	for(int i = 0; i<v2.size(); i++){
		cout << v2[i] << " ";
	}

	cout << endl;

	return 0;
}