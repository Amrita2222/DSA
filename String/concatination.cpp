#include<iostream>
#include <cstring>
using namespace std;

// int main(){
//     string str1, str2;
//     cout << "Enter two strings : ";
//     // getline(cin, str1, str2);
//     getline(cin, str1);
//     getline(cin, str2); // Ab clear hua

//     // cout << "Concatinating strings are : " << str1 +  " " + str2 << endl;
//     cout << "Concatinating string are :" << str1.append(str2) << endl;
//     return 0;
// }
// str1 = "Rita"; str2 = "Kumari";
// Concatinating strings are : "Rita Kumari";

int main(){
    char str1[] = "Rita";
    char str2[]= "Kumari";

    //  String length
    cout << "Length of the string is :" << strlen(str1) << endl;
    return 0;
}
