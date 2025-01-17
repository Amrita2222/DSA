// Write a program to print all odd numbers in an array.

#include<iostream>
using namespace std;


// Run the program
int main(){
    int n;
    cout << "Enter the array size : ";
    cin >> n;

    int arr[n];

    // input aaray elements
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // finding ODD elements in an array
    cout << "ODD numbers in the array: ";
    for(int i = 0; i < n; i++){
         if(arr[i] % 2 != 0) {
            cout << arr[i] << " "; 
        }
    }
   
    return  0;
}


/*
    1. Declearation , Basic syntax, conditional, looping, function, array, and 
    string 

    2. Time and space complexity
    3. Basic mathematics
    4. Recursion
    5. C++ STL
    6. Hashing
    7. Sorting
    8. Array
    9. Binary Search
    10. String
    11. Linked List
    12. Stack and Queue
*/


// itna try krna ki 2 month me ho jaye
// 2 - 7 tak 8 - 10 din me ho jayega
// Array - 15 days
// Binary Search - 15 days
// String - 5 days (Maximum) Dependent of array
// Linked List - 15 days
// Stack and Queue - 5 days (max)
// Max - 65 days aa  rha h 




