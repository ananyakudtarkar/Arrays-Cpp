#include <iostream>
using namespace std;

// Reversing Array

int main() {
    int len;
    cout<<"Enter length of Array: ";
    cin>>len;
    int Arr[len];
    cout<<"Enter "<<len<<" elements: ";
    for (int i = 0; i < len; i++){
        cin>>Arr[i];
    }
    
    cout<<"Reversed Array: \n";
    for(int i = len-1; i>=0; i--){
        cout<<Arr[i]<<" ";
    }
    
    return 0;
}

/*
Output:
Enter length of Array: 5
Enter 5 elements: 1 2 3 4 5
Reversed Array: 
5 4 3 2 1 
*/
