/*
	
	Vectors Part II
	
	How to create a vector ? 
		> use fill constructor
		> use range constructor
		> use copy constructor
		> use initialiser list (C++11)
	How to add elements to a vector ?
	    > use vector::insert
	      > single element
	      > fill
	      > range
	      > initialiser list
	How to remove elements from a vector ?
	    > use vector::erase
	      > single element
	      > range

	How to sort a vector ?
      > use built-in comparator
      > use user-defined comparator
      > pass in reverse order
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	vector<int> v; //default constructor or empty container constructor

	cout << "size: " << v.size() << endl;
	cout << "capacity: " << v.capacity() << endl;

	v.push_back(10);

	cout << "size: " << v.size() << endl;
	cout << "capacity: " << v.capacity() << endl;

	v.push_back(20);

	cout << "size: " << v.size() << endl;
	cout << "capacity: " << v.capacity() << endl;

	v.push_back(30); //new vector of capacity 4

	cout << "size: " << v.size() << endl;
	cout << "capacity: " << v.capacity() << endl;

	for(int i = 0; i<v.size(); i++){
		cout << v[i] << " ";
	}

	cout << endl;

	for(int x : v){
		cout << x << " ";
	}

	cout << endl;

	for(auto it = v.begin(), end = v.end(); it != end; it++){
		cout << *it << " ";
	}

	cout << endl;

	v.pop_back();

	cout << "size: " << v.size() << endl;
	cout << "capacity: " << v.capacity() << endl;

	for(auto x : v){
		cout << x << " ";
	}

	cout << endl;

	v.clear();

	cout << "size: " << v.size() << endl;
	cout << "capacity: " << v.capacity() << endl;

	v.empty() ? cout << "vector is empty." << endl:
				cout << "vector is not empty. " << endl;

	return 0;
}