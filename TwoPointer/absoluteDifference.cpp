#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
#include <algorithm>
using namespace std;

int solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    int difference = INT_MAX;
    int i = 0, j = 0, k = 0;
    
    while(i < A.size() && j < B.size() && k < C.size()){
        int a = A[i], b = B[j], c = C[k];
        int currentMax = max({a,b,c});
        int currentMin = min({a,b,c});
        difference = min(difference,currentMax - currentMin);
        if(currentMin == a){
            i++;
        }
         else if(currentMin == b){
            j++;
        }
        else{
            k++;
        }
    }
     return difference;
}
int main(){
     vector<int> A = {1, 4, 5, 8, 10};
    vector<int> B = {6, 9, 15};
    vector<int> C = {2, 3, 6, 6};

    int result = solve(A,B,C);
    cout << " " << result << endl;
    return 0;
}