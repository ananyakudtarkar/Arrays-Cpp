Arrays in C++

AIM: To study and implement Arrays in C++

THEORY:
Arrays in C++ are a data structure that allows storage and management of multiple elements of the same type in contiguous memory locations. They provide a simple and efficient way to handle large volumes of data using indexing.
Key takeaways include:
1. Arrays can be one-dimensional or multi-dimensional.
2. They are fixed in size and must be declared before use (unless dynamically allocated).
3. Array elements are accessed via zero-based indexing.
4. Arrays support various operations like traversal, searching, sorting, insertion, deletion, etc.
5. For string handling, C++ supports both character arrays (C-style strings) and the string class, the latter being safer and more powerful.


Syntax: datatype arrayName[size];

Intitialization:
int arr[5] = {1, 2, 3, 4, 5}; // Fully inititalized
int arr[5] = {1, 2}; // Partially nitialized (rest = 0)
int arr[] = {10, 20, 30}; // Compiler deduces size (3)

Accessing elements:
cout << arr[2]; // Prints 3rd element

Types:
One-Dimensional Array: int arr[10];
Two-Dimensional Array: int mat[3][3];
Multi-Dimensional Array: int tensor[2][3][4];

Limitations:
1. Fixed size (determined at compile-time unless using dynamic memory)
2. Can only hold elements of the same type

ALGORITHMS:
1. To find sum and average of elements in an array:
Step 1: Start
Step 2: Initialize sum ← 0
Step 3: Input the value of n (number of elements in the array)
Step 4: Declare an array A of size n
Step 5: For i ← 0 to n - 1
        a. Read A[i]
        b. Add A[i] to sum
Step 6: Compute average:
        average ← sum / n
Step 7: Output sum and average
Step 8: Stop

2. Search an element in an array (linear search algorithm):
Step 1: Start
Step 2:Input the number of elements n
Step 3: Declare an array A of size n
Step 4: For i ← 0 to n - 1
        a. Read A[i]
Step 5: Input the element to search, call it key
Step 6: Initialize found ← false
Step 7: For i ← 0 to n - 1
        a. If A[i] == key then
        • Set found ← true
        • Output "Element found at position" i (or i+1 if 1-based index)
        • Exit loop
Step 8: If found == false
        • Output "Element not found"
Step 9: Stop

3. Find minimum and maximum elements in an array:
Step 1: Start
Step 2: Input the number of elements n
Step 3: Declare an array A of size n
Step 4: For i ← 0 to n - 1
        a. Read A[i]
Step 5: Initialize
        min ← A[0]
        max ← A[0]
Step 6: For i ← 1 to n - 1
        a. If A[i] < min, then min ← A[i]
        b. If A[i] > max, then max ← A[i]
Step 7: Output min and max
Step 8: Stop

4. Reverse the elements of an array:
Step 1: Start
Step 2: Input the number of elements n
Step 3: Declare an array A of size n
Step 4: For i ← 0 to n - 1
        a. Read A[i]
Step 5: Initialize two variables:
        start ← 0
        end ← n - 1
Step 6: While start < end do
        a. Swap A[start] and A[end]
        b. Increment start by 1
        c. Decrement end by 1
Step 7: Output the reversed array
Step 8: Stop

CONCLUSION:
Arrays are a fundamantal and essential data structure in C++. While arrays offer fast access to elements and simplicity, they lack flexibility compared to more advanced containers like vectors (std::vector) or lists (std::list). However, mastering arrays is crucial for understanding more complex data structures and efficient algorithm design.
