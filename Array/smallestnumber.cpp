// Write a program to find the smallest element in an array.
#include<iostream>
using namespace std;

int main(){
 int array[] = {6,7,4,7,12,2};
    int min = array[0];
    int size = sizeof(array)/sizeof(array[0]);

    
    for(int i=1; i <6; i++ ){
        if(array[i] < min){
            min = array[i];
        }
    }
    cout <<  "smallest Number : " << min << endl;
    return 0;
}