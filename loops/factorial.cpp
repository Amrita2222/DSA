#include<iostream>
using namespace std;

// Write a program to find the factorial
int main(){
    int n;
    long factorial = 1.0;
   
    cout << "Enter your number " << endl;
    cout >> n;
    

    for(int i = 1; i <= n; i++){
        factorial * = i;
    }
    cout << "factorial of " << n << " = " << factorial;
    return 0;
}