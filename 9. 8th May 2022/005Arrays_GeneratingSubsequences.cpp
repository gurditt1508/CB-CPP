#include<iostream>
#include<cmath>

using namespace std;

int main(){

	int A[] = {1,2,3};
	int n = sizeof(A) / sizeof(int);

	for(int no = 0; no < pow(2,n); no++){
//or for(int no = 0; no < (1<<n); no++){} //because 1<<n = 1*(2 ^n)
		//iterate over the n-bit representation of
		//no from right ot left i.e. from the 0th bit 
		//till the (n-1)th bit
		for(int i = 0; i<n; i++){
			if((no>>i)&1){
			//ith bit of the given no is set
			//therefore include the element 
			//at the ith index of the array	
			//in the subsequence
				cout << A[i] << " ";
			}
		}
		cout << endl;
	}

	return 0;
}