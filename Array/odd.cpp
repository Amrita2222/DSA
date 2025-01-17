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


// copy paste abhi nhi krna chahiye tha tmhe
// okay line by line likhugi
// Aur file ka name odd.cpp sahi nhi h 
// findOddInArray.cpp best rhta es type se socha kro upr se hi pta chal jaye
// ab bolo kya kre multidemi
//