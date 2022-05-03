#include<iostream>
using namespace std;

int main(){
    int arr[5] = {10, 20 , 30, 40, 50};
    int ele, index, i;
    cin >> ele;
    for(i = 0; i < 5; i++){
        if(arr[i] == ele){
            index = i;
            break;
        }
    }
    if(i >= 5){
        cout << -1 << endl;
    }else{
        cout << "element is present at index " << index << endl;
    }

    return 0;
}