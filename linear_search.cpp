#include <iostream>
using namespace std;

// Search element in Array. (linear search algorithm)

int main() {
    char arr[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h','i','j'};
    char key;
    bool found = false;
    cout<<"Enter character to search: ";
    cin>>key;
    for(int i = 0; i < 10; i++){
        if (arr[i] == key){
            found = true;
            cout << "Character found at position "<<i+1<<".";
            break;
        }
    }
    if (found == false){
        cout<<"Character not found.";
    }
    return 0;
}

/*
OUTPUT:
Enter character to search: g
Character found at position 7.

Enter character to search: s
Character not found.
*/
