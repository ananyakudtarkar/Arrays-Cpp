#include <iostream>
using namespace std;

// Sum and Average of array.

int main() {
    int len, avg;
    int sum = 0;
    cout<<"Enter size of array: ";
    cin>>len;
    
    int Arr[len];
    cout<<"Enter "<<len<< " numbers: \n";
    for(int i = 0; i < len; i++){
        cin>>Arr[i];
    }
    for (int i = 0; i<len;i++){
        sum+=Arr[i];
    }
    avg = sum/len;
    cout<<"Sum of elements: "<<sum<<endl;
    cout<<"Average of elements: "<<avg;
    return 0;
}


/*
Enter size of array: 5
Enter 5 numbers: 
1 2 3 4 5
Sum of elements: 15
Average of elements: 3
*/
