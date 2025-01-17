#include<iostream>
using namespace std;

/*
int main(){
    // another example
char vowels[5];
for(char element:vowels){
    cin >>element;

    cout << element << " ";
}
}
*/

int main(){
    int array[] = {3,5,4,6,7,5};
    int sum = 0;
    int size = sizeof(array)/sizeof(array[0]);
    for(int i = 0; i<size; i++){
        sum+=array[i];
    }
    cout << sum << endl;

    // find max value in array
    int max = array[0];
    for(int i=1; i<6; i++){
        if(array[i] > max){
            max = array[i];
        }  
    }
    cout << max << endl;
    return  0;
}
