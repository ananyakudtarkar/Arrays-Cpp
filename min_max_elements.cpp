#include <iostream>
using namespace std;

// Min Max elements

int main() {
    int len;
    cout<<"Enter size of array: ";
    cin>>len;
    int Arr[len];
    cout<<"Enter "<<len<< " numbers: \n";
    for(int i = 0; i < len; i++){
        cin>>Arr[i];
    }
    int max = Arr[0];
    int min = Arr[0];
    for (int i = 0; i<len; i++){
        if(Arr[i]>max){
            max = Arr[i];
        }
        if(Arr[i]<min){
            min=Arr[i];
        }
    }
    cout<<"Max element: "<<max<<endl;
    cout<<"Min element: "<<min;
    
}

/*
Enter size of array: 10 
Enter 10 numbers: 
7 0 13 82 96 57 69 32 84 48
Max element: 96
Min element: 0
*/
