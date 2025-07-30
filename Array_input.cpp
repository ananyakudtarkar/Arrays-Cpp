#include <iostream>
using namespace std;

// Take Array input from User and display it

int main() {
    int len;
    cout<<"Enter size of array: ";
    cin>>len;
    
    int Arr[len];
    cout<<"Enter "<<len<< " numbers: \n";
    for(int i = 0; i < len; i++){
        cin>>Arr[i];
    }
    cout<<"Given Array: ";
    for(int i = 0; i < len; i++){
        cout<<Arr[i]<<" ";
    }
    return 0;
}


/*
OUTPUT:
Enter size of array: 6
Enter 6 numbers: 
1
2 3 4 5 6
Given Array: 1 2 3 4 5 6 
*/
