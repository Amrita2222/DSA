// Write a program to calculate the average of all elements in an array.


#include<bits/stdc++.h>
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

    // finding sum of all elements in an array
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    // finding average of all elements in an array
    float avg = (float)sum / n;
    cout << "Average of array elements : " << avg << endl;
    
    return  0;
}
// it take a decimal value like 1.2 1.3 1.5 1.6
// Then you need to declear float array elements
// float array[] = {1.2 1.3 1.5 1.6}; like this array
// all 5 questions are done
// Okay then edit your all code and add them to taking input from user
// okay but in this time or after sometime
// Whenever you are free to change

/*
Write a program to search for a specific element in an array.
Write a program to print all even numbers in an array.
Write a program to print all odd numbers in an array.
Write a program to count even and odd numbers in an array.
*/