#include<iostream>
#include<cstring>
#include <string>
using namespace std;


int main(){
    // char str1[] = "Hello";
    // char str2[] = "Rita";
    // cout << str1 << " " << str2 << endl;

    // strcat(str1, str2); 
    // cout << "Concatenated String: "  << str1   << endl;

    // cout << " Length of String " << strlen(str1) << endl;
    
    // strcpy(str1, "C++"); // Copy string
    // cout << "After Copy: " << str1 << endl;

    // if (strcmp(str1, "C++") == 0)  // Compare strings
    //     cout << "Strings are equal!" << endl;

    string str1 = "Hello";
    string str2("World");

    cout << str1 + " " + str2 << endl;  // Concatenation using `+`

    string s = "Hello";

    s.append(" World");   // Append
    cout << s << endl;

     cout << "Length: " << s.length() << endl; // Length

    s.insert(5, ",");  // Insert at position 5
    cout << s << endl;

    s.erase(5, 1);  // Remove character at index 5
    cout << s << endl;

    return 0;
}                                    

