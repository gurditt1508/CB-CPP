#include<iostream>
using namespace std;

int main(){
    int arr[] = {10, 20 , 30, 40, 50};
    int n = sizeof(arr)/ sizeof(int);

    int ele, index, i;
    cin >> ele;
    
    for(i = 0; i < n; i++){
        if(arr[i] == ele){
            index = i;
            break;
        }
    }
    if(i == n){
        cout << -1 << endl; //target isn't present
    }else{
        cout << "element is present at index " << index << endl;
    }

    return 0;
}