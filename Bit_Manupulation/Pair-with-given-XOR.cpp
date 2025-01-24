// #include<iosteram>
#include <bits/stdc++.h>
using namespace std;


int pairXOR(vector<int> &A, int B){
    unordered_set<int> sum;
    int count;
    for(int num : A){
        int existnum = num ^ B;
        if(sum.find(existnum)!=sum.end()){
            count++;
        }
        sum.insert(num);
    }
    return count;
}
int main(){
    vector<int> A = {5,4,10,15,7,6};
    int B = 5;
    cout << pairXOR(A,B);
    return 0;
}
// int pairXOR(vector<int> &A, int B){
//     int sum = 0;
//     for(int i=0; i<A.size(); i++)
//         sum ^= A[i];
//     return sum ^ B;
// }

// int main(){
//     vector<int> A = {1, 2, 3, 4, 5};
//     int B = 6;
//     cout << pairXOR(A, B);
//     return 0;
// }