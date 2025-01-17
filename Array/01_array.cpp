#include<iostream>
using namespace std;


/*

int main(){

int array[]= {1,2,3,4,5};

cout << sizeof(array) << endl;
cout << sizeof(array)/sizeof(array[0]) << endl;

return  0;
}
*/

int main(){
    int array[]= {1,2,3,4,5};
    // cout << sizeof(array) << endl;
    int size = sizeof(array)/sizeof(array[0]);

   for (int i = 0; i < size; i++) {
  cout << array[i] << endl;
}
// use foreach loop
for(int ele:array){
    cout << ele << endl;
}

// use while loop
int index = 0;
while(index <size){
cout << array[index] << endl;
index++;
}


return 0;
}

/*
data structure which store a collection of item.
homogeneous array
conginous

representation of Array 
int a = [1,2,3,4,5];
*/ 

/*
Syntax for array declaration

datatype arrayname[size];
int array[]= {1,2,3,4,5};       initiallize the array
 
*/
/*
Memory allocation in Array
contigous

last element = size-1

Note : Get the Size of an Array
sizeof()
Note  :  length

*/


/* use foreach loops
 for(datatype variables:array){

}*/