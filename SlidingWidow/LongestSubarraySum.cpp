#include<iostream>
#include<vector>
using namespace std;

int longestSubarrayWithSumK(vector<int> &arr, int K) {
    int maxlen = 0;
    int n = arr.size();
    for(int i = 0; i < n - 1; i++){
        int sum = 0;
        for(int j = i; j < n - 1; j++){
            sum = sum + arr[j];
            if(sum <= K){
                maxlen = max(maxlen, j - i + 1);
            }
            else if(sum > K) break;
        }
    }
    return maxlen;
}

int main(){
      vector<int> arr = {2, 5, 1, 7,10};
    int target = 14;

    int ans = longestSubarrayWithSumK(arr, target);
    cout << "Longest Subarray Length: " << ans << endl;
    return 0;
}