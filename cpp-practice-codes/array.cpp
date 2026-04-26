#include <iostream>
using namespace std;
int main(){
int arr[6] = {20,10,15,50,60};
int n = 6; 

for(int i = n; i>3; i--)
{
    arr[i] = arr[i-1];
    
}
arr[2] = 16;

//cout<< "n:"<<n;
 cout<<"Elements : ";
 for (int i = 0; i<6; i++)
 {
    
     cout<<arr[i]<<" \n";

 }
return 0;
}

