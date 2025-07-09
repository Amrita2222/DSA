#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool isPrime(int x) { 
    if(x <= 1){
        return false;
    }
    if(x == 2 || x == 3){
        return true;
    }
    if(x % 2 == 0 || x % 3 == 0){
        return false;
    }

    for(int i = 5; i * i <= x; i += 6){
        if(x % i == 0 || x % (i +2) == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int number;
    cout << "Enter the value: ";
    cin >> number;

    if(isPrime(number)){
        cout << number << " number is prime" << endl;
    }
    else{
        cout << number << " number is not prime" << endl;
    }
    return 0;
}