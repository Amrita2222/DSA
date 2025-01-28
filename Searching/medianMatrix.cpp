#include<iostream>
#include<algorithm>
#include<vector>
using  namespace std;

int findMedian(vector<vector<int>> &A) {
    int n = A.size();
    int m = A[0].size();
    vector<int> arr;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            arr.push_back(A[i][j]);
        }
    }
    sort(arr.begin(), arr.end());
     return arr[(n * m) / 2];
}

int main(){
    vector<vector<int>> A = {{1, 3, 5}, {2, 4, 6}, {7, 8, 9}};
    int median = findMedian(A);
    cout << "Median: " << median << endl;
    return 0;
}
