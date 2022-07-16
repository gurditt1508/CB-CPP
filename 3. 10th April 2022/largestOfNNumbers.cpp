#include<iostream>
#include<climits>

using namespace std;

int main() {
    int n;
    cout << "enter number of entries: " << endl;
    cin >> n;

    int max = INT_MIN;
    int num;

    for(int i = 1; i <= n; i++){
        cout << "enter number: ";
        cin >> num;
        if(num > max){
            max = num;
        }
    }
    cout << "the greatest number is " << max;
    return 0;
}