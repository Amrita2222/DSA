#include<iostream>
#include<vector>
using namespace std;
/*
Count of rectangles with area less than the given number
Given a sorted array of distinct integers A and an integer B, find and
 return how many rectangles with distinct configurations can be created using elements
  of this array as length and breadth whose area is lesser than B. 
  (Note that a rectangle of 2 x 3 is different from 3 x 2 if we take configuration into view) For example:
A = [2 3 5],  B = 15
Answer = 6 (2 x 2, 2 x 3, 2 x 5, 3 x 2, 3 x 3, 5 x 2)*/

int countRectangle(vector<int>& A, int B){
    int n = A.size();
    int count = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int area = A[i] * A[j];
            if(area < B){
                count++;
            }
        }
    }
    return count;
}

int main(){
    vector<int> A = {2,3,5};
    int B = 15;
    int ans = countRectangle(A, B);
      cout << "area less than " << B << " is: " << ans << endl;
    return 0 ;

    // int B, n;
    // cout << " Enter the size of array: ";
    // cin >> n;

    // vector<int> A(n);
    // cout << "Enter element of array: ";
    // for(int i = 0; i< n; i++){
    //     cin >> A[i];
    // }

    // cout << "value ";
    // cin >> B;
    // int ans = countRectangle(A, B);
    //   cout << "area less than " << B << " is: " << ans << endl;
    // return 0 ;
}
