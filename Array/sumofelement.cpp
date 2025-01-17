// Write a program to calculate the sum of all elements in an array.

#include<iostream>
using namespace std;


int main(){
    int array[]= {3,5,6,8,5,87,9};
    int sum =0;
    int size = sizeof(array)/sizeof(array[0]);

    for(int i= 0; i <size; i++){
        sum = sum + array[i];
    }
    cout << "sum of all element :" << sum << endl;
    return  0;
}