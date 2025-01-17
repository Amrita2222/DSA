#include<iostream>
using namespace std;

void patter1(int n){
    // outer loop
    for(int i=0; i<n; i++){
        // inner loop
        for(int j = 0; j<n; j++){
            cout << "* ";
        }
        cout << endl;
    }
    
}


int main(){
    int n;
    cin >> n;
    patter1(n);
}
