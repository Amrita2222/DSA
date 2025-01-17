#include<iostream>
#include<vector>
using namespace std;

 vector<int> subarraySum(vector<int> &arr, int target) {
    int n = arr.size();
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += arr[j];
            if(sum == target){
                return{i+1, j + 1};
            }
        }
    }
    return {-1};
 }

 int main(){
    vector<int> arr = {1,2,3,7,5};
    int target = 12;

    vector<int> result = subarraySum(arr, target);

    if(result.size() == 2){
        // cout << subarraySum / result[0] << " to" << result[1] << endl;
        cout << "Subarray index " << result[0] << " to " << result[1] << endl;

    }
    else{
        cout << " not found" << endl;
    }
    return 0;
 }