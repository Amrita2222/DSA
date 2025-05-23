#include<iostream>
using namespace std;

bool isPalindrome( int num){
    int original = num;
    int reverse = 0;
    while(num > 0){
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    return original == reverse;
}

int main() {
    int number;
    cout << "Enter the number: ";  
    cin >> number;

    if (number < 0) {
        cout << number << " is not a palindrome (negative numbers are not palindromes)." << endl;
    }
    else if (isPalindrome(number)) { 
        cout << number << " is a palindrome." << endl;
    }
    else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}

