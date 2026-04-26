#include <iostream>
using namespace std;

int main() {
    int arr[5], key;
    for(int i=0;i<5;i++) cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    for(int i=0;i<5;i++){
        if(arr[i] == key){
            cout << "Found at position " << i+1;
            return 0;
        }
    }

    cout << "Not Found";
}