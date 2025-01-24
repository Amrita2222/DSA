#include <iostream>
#include <vector>
using namespace std;

int maxScore(vector<int>& cardPoints, int k) {
    int lsum = 0, rsum = 0;
    int n = cardPoints.size();
    // Calculate the sum  (left side)
    for (int i = 0; i < k; i++) {
        lsum += cardPoints[i];
    }
    // Sliding Window
    int maxSum = lsum;
    for (int i = 0; i < k; i++) {
        lsum -= cardPoints[k - 1 - i]; // Remove element from left
        rsum += cardPoints[n - 1 - i]; // Add element from right
        maxSum = max(maxSum, lsum + rsum);
    }
    return maxSum;
}

int main() {
    vector<int> arr = {6, 2, 3, 4, 7, 2, 1, 7, 1};
    int target = 4;
    int result = maxScore(arr, target);
    cout << "Maximum points you can obtain from Cards: " << result << endl;
    return 0;
}
