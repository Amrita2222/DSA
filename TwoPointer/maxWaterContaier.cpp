#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int maxArea(vector<int> &A) {
     int n =  A.size();
    int maximum = 0;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int width = j - i;
            int height = min(A[i], A[j]);
            int area = width * height;
            maximum = max(maximum, area);
        }
    }
    return maximum;
}
int main(){
    vector<int> heights = {1,5,4,3};
    cout << "total maximum area : " << maxArea(heights) << endl;
    cout << "total maximum area : " << maxWater(heights) << endl;
    return 0; 
}



int maxWater(vector<int> &A) {
    int left = 0, right = A.size() - 1; 
    int maximum = 0;
    
    while(left < right){
        int width = right - left;
        int height  = min(A[left], A[right]);
        int area = width * height;
        maximum = max(maximum, area);
        
        if(A[left] < A[right] ){
            left++;
        }
        else {
            right--;
        }
    }
    return maximum;
}
