#include<iostream>
using namespace std;

int main(){
    string str1, str2;
    cout << "Enter two strings : ";
    // getline(cin, str1, str2);
    getline(cin, str1);
    getline(cin, str2); // Ab clear hua

    cout << "Concatinating strings are : " << str1 + str2 << endl;
    return 0;
}


// str1 = "Rita"; str2 = "Kumari";
// Concatinating strings are : "Rita Kumari";
