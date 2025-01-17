#include <iostream>
using namespace std;

int main(){
    // Agr mujhe name store krna h kisi user se to es trh se karenge
    // char name[20]; // Array of characters
    // cout << "Enter your name : ";
    // cin >> name;
    

    string name;
    cout << "Enter your Full name : ";
    getline(cin, name);
    cout << "Name is : " << name << endl; // itna tak smjh me aaya

    return 0;
}

// Esme n hm char type data ko 20 characters store kra skte h
// for example 
// char alphabets[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
// // Agr mujhe ye print krana pade to loop use karenge
// for(int i = 0; i < 26; i++){
//     cout << alphabets[i] << endl; // esse a - z tak print ho jayega
// }

// 
// dono chize smjh gye bolo


