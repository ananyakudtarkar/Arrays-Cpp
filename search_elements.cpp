#include <iostream>
using namespace std;

// Search element in Array.

int main() {
    char arr[10] = {'a', 'b', 'c', 'd', 'e', 'a', 'g', 'a','n','c'};
    char search;
    int count;
    cout<<"Enter character to search: ";
    cin>>search;
    for(int i = 0; i < 10; i++){
        if (search == arr[i]){
            count++;
        }
    }
    if(count==0){
        cout<<"Element not found.";
    }
    else{
        cout<<"Element found "<<count<<" times.";
    }
    return 0;
}

/*
Output:
Enter character to search: a
Element found 3 times.
*/
