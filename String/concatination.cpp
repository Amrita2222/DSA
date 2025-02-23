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
    string str = "Hello";

    //  String length
    cout << "Length of the string is :" << strlen(str1) << endl;
 

    // String copy
    strcpy(str1, str2);
    cout << "After copy string is :" << str1 << endl;

    // String concatenation
    strcat(str1, "c++");
    cout << "After concatenation string is:" << str1 << endl;

    // String comparison
    if(strcmp(str1,str2) == 0){
        cout << "String are equal" << endl;
    }
    else{
        cout << "String are not equal" << endl; 
    }

    // String substring
    cout << "Sbustring is :" << str.substr(0,4)<< endl;

    // String input 
    string str3 = "Data";
    cout << "Enter a string :"; 
    cin >> str3;
    cout << "String is : " << str3 <<   " " << endl;
    return 0;
}
