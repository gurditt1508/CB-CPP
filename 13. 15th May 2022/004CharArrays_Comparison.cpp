#include<iostream>
#include<cstring>
using namespace std;

int compareStrings(char* str1, char* str2){
	int i = 0;
	int j = 0;
	int n1 = strlen(str1);
	int n2 = strlen(str2);
	while(i < n1 and j < n2){
		if(str1[i] > str2[j]){
			return 1;
		}else if(str1[i] < str2[j]){
			return -1;		
		}
		// }else{
		// 	return 0;
		// }
		i++;
		j++;
	}
	if(i < n1){ //str1 is longer than str2
		return 1;
	}else if(j < n2){ //str2 is longer than str1
		return -1;
	}else{ //both are equal
		return 0;
	}
}

int main(){
	char str1[] = "mango";
	char str2[] = "man";

	//cout << compareStrings(str1, str2) << endl;
	cout << strcmp(str1, str2) << endl; //does the same thing as compareString function
	return 0;
}