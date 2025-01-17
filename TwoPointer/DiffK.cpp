#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int diffPossible(vector<int> &A, int B) {
    
    int left = 0, right = 1;
    
    while(right < A.size()){
        if( A[right]-A[left] == B  && left != right){  //condition
            return 1;               // 1 for true
        } 
        else if(A[right] - A[left] < B){
            right++;
        }
        else{
            left++;
        } 
    }
    return 0; // 0 for false
}

int main(){
    
}
