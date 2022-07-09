#include<iostream>
#include<set>

using namespace std;

int main(){
	set<int> s;
	s.insert(5);
	s.insert(4);
	s.insert(3);
	s.insert(2);
	s.insert(1);

	for(auto x : s){
		cout << x << " ";
	}

	cout << "size: " << s.size() << endl;

	s.erase(5);
	cout << "size: " << s.size() << endl;

	for(auto x : s){
		cout << x << " ";
	}
	

	for(auto it = s.begin(), end = s.end(); it != end; it++){ //instead of using auto, we can also use 
		//set<int>::iterator
		cout << *it << " ";
	}
	//we can print using for-each loop
	for(auto x : s){
		cout << x << " ";
	}
	return 0;
}