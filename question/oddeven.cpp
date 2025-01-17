#include <iostream>
using namespace std;

// Number is even or odd.
 int main(){
    int n;
    cout << "Enter Your no. : " ;
    cin >> n;

    if(n % 2 == 0){
        cout << n << " is even number" << endl;
    }
    else{
        cout << n << " is odd number" << endl;
    }
 }