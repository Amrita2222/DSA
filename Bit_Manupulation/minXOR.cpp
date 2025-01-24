#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

// Function to find the minimum XOR value between all pairs of elements in the array
int minXor(vector<int> &A) {
     sort(A.begin(), A.end());

    int minXOR = INT_MAX;
    
    for (int i = 0; i < A.size() - 1; i++) {
        int xorValue = A[i] ^ A[i + 1];
        minXOR = min(minXOR, xorValue);
    }
    return minXOR;
}

int findMinXOR(vector<int>& A) {
    int n = A.size();
    int minXOR = INT_MAX;
    
    // Check every pair of elements
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int xorValue = A[i] ^ A[j];
            minXOR = min(minXOR, xorValue);
        }
    }
    return minXOR;
}

int main() {
    vector<int> A = {0, 2, 5, 7};
    cout << "Minimum XOR: " << findMinXOR(A) << endl;  // Output: 2
     cout << "Minimum XOR: " << minXor(A) << endl;  // Output: 2
    return 0;
}
