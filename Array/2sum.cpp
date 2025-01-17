#include<iostream>
#include<vector>
#include <unordered_map>
using namespace std;
// vector<int> twoSum(vector<int>& nums, int target) {
//     for(int i = 0; i < nums.size(); i++){
//         for(int j = 0; j < nums.size(); j++){
//           if(i == j)  {
//             continue;
//           }
//           if(nums[i] + nums[j] == target){
//             return {i, j};
//           }
//         }
//     }
//     return {};
// }
 vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> result; 

    for (int i = 0; i < nums.size(); i++) {
        int n = nums[i];
        int complement = target - n;
        if (result.find(complement) != result.end()) {
            return {result[complement], i}; 
        }
        result[n] = i;
    }
    return {};
 }


int main(){
vector<int> nums = {2, 6,5,8,11}; //  input
    int target = 14; // Target 

    vector<int> result = twoSum(nums, target);
    if (!result.empty()) {
        cout << "index: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution" << endl;
    }

    return 0;
}