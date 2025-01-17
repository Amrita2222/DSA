// Write a program to search for a specific element in an array.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Run the program
    int target;
    cout << "Enter the element to search for : ";
    cin >> target;

    for(int i = 0; i < n; i++){
        if(arr[i] == target){
            cout << arr[i] << " is found at index " << i << endl;
        }
    }
    return 0;
}

// wo dono v dekh lo
// bna liye
// Kon sa 
// ood and even 
