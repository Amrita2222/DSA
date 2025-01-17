// Write a program to print all even numbers in an array.
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

    // finding even elements in an array
    cout << "even numbers in the array: ";
    for(int i = 0; i < n; i++){
         if(arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }

    // tm code copy paste kyu kiye ho
    // tumhra wala hi paste kr ke condition lga diye
   // Hn bad me bhul jana copy paste karke
//    nhi
    return  0;
}