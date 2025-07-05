#include<iostream>
#include <string>
using namespace std;

class Solution{
    public:

    void printNum(){
        int int_val;
        float float_val;
        string str_val;

        cout << "Enter an integer: ";
        cin >> int_val;

        cout << "Enter a float: ";
        cin >> float_val;

        cout << "Enter a string: ";
        cin.ignore(); // To clear newline from previous input
        getline(cin, str_val);

        cout << "\n--- Output ---\n";
        cout << "Integer: " << int_val << endl;
        cout << "Float: " << float_val << endl;
        cout << "String: " << str_val << endl;
    }

};

int main(){
    Solution obj;
   obj.printNum();
    return 0;
}