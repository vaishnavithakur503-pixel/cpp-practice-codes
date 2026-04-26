#include <iostream>
using namespace std;

int main() {
    int arr[5];
    for(int i=0;i<5;i++) cin >> arr[i];

    int max = arr[0], second = -9999;

    for(int i=0;i<5;i++){
        if(arr[i] > max){
            second = max;
            max = arr[i];
        }
        else if(arr[i] > second && arr[i] != max){
            second = arr[i];
        }
    }

    cout << "Second Largest = " << second;
}