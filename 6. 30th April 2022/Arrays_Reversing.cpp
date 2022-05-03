#include<iostream>
using namespace std;

int main(){

    int arr[5];
    for(int i = 0; i < 5; i++){
        cin >> arr[i];
    }
    int i = 0;
    int j = 4;
    for(i = 0,j = 4; i <= j; i++, j--){
        // int a = arr[i];
        // arr[i] = arr[j];
        // arr[j] = a;
        swap(arr[i], arr[j]); //in-built function
    }
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    return 0;
}