// Write a program to find the largest element in an array.

#include<iostream>
using namespace std;

int main(){
    int array[] = {1,4,3,5,6};
    int max = array[0];
    int size = sizeof(array)/sizeof(array[0]);

    for(int i=1; i <6; i++ ){
        if(array[i] > max){
            max = array[i];
        }
    }
    cout <<"largest number : "<<  max << endl;
    return 0;
   
}