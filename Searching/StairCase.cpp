#include<iostream>
#include<vector>
using namespace std;

int stairCase(int A){
    int height = 0;
    while(A >= (height + 1)){
        A -= height + 1;
        height++;
    }
    return height;
}

int main(){
    int n;
    cin>> n;
    cout<<stairCase(n);
    return 0;
}