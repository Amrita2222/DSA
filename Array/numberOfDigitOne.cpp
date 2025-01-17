#include<iostream>
#include<vector>
using namespace std; 

  int countDigitOne(int n) {
        int count = 0; // store the total 1

        for (int i = 0; i <= n; i++){   // i= 0
           string stringNum = to_string(i);
           for (char c : stringNum){
            if (c == '1') {
               count++;
          }    
           }
        }
        return count;
    }

int main(){
    int  n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Total occurrences of digit 1: " << countDigitOne(n) << endl;
    return 0; 
}

/*
i= 0, no match              i = 7, no
i= 1, increment             i = 8, no
i = 2, no                   i = 9, no
i = 3, no                   i = 10, increment
i = 4, n0                   i = 11, increment
i = 5, no                   i = 12, increment
i= 6, no                    i = 13, increment
 */