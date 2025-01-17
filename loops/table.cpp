#include<iostream>
using namespace std;

// Write a program that prompts the user to input a positive integer. It should then print the multiplication table of that number.

int main(){

    int n;
    cout << " Enter the positive integer: " ;
    cin >> n;

    for(int i = 1; i <=10; i++){
        cout << n << " x " << i << " = " << n * i << endl;
    }
}