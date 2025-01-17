#include<iostream>
#include<vector>
using namespace std;

 int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
      if(R1[0] < L2[0] || R2[0] < L1[0])  {
        return false;
      }
       if(R1[1] > L2[1] || R2[1] > L1[1])  {
        return false;
      }
      return true;
 }

 int main(){
int l1[] = {0, 10};
int r1[] = {10, 0};
int l2[] = {5, 5};
int r2[] = {15, 0};

    // cout << " Result:  " << doOverlap(l1, r1, l2, r2) << endl;

     if (doOverlap(l1, r1, l2, r2)) {
        cout << "1 means overlap" << endl;  // Overlap
    } else {
        cout << "0 means non-overlap" << endl;  // No Overlap
    }

    // Example: 2
    int x1[] = {0,2}, y1[] = {1,1};
    int x2[] = {-2,0}, y2[] = {0,-3};

    if(doOverlap(x1, y1, x2, y2)){
        cout << "1 means overlap" << endl;  // Overlap
    }
    else{
        cout << "0 means non-overlap" << endl;  // No Overlap
    }
    return 0;
 }