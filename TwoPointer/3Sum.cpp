#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;


// vector<vector<int>> threeSum(vector<int>& nums) {
//     int n = nums.size();
//     set<vector<int>> totalsum; //remove duplicate value 
//     sort(nums.begin(), nums.end());  // sorting algorithm

//     for (int i = 0; i < n; i++){
//      for(int j= i + 1; j < n; j++){
//         for(int k = j + 1; k < n; k++){
//             if(nums[i] + nums[j] + nums[k] == 0){
//                 vector<int> sum = {nums[i], nums[j], nums[k]};
//                totalsum.insert(sum);  // add unique value
//             }
//         }
//      }
//     }
//     vector<vector<int>> triplet(totalsum.begin(), totalsum.end());
//     return triplet; 
// }



    vector<vector<int>> triplets(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
         sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++){
          if(i  >  0 && nums[i] == nums[i - 1]){  
            continue;
          }
          int j = i + 1;
          int k = n - 1;

          while( j < k){
            int sum = nums[i] + nums[j] + nums[k];

            if(sum < 0){
                j++;
            }
            else if(sum > 0){
                k--;
            }
            else{
                result.push_back({nums[i], nums[j],nums[k]});
                j++;
                k--;
                while(j < k && nums[j] == nums[j-1]) j++;
                while(j < k && nums[k] == nums[k+1]) k--;
            }
          }
        }
        return result;
    }

int main(){
   vector<int> arr = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = triplets(arr);

    for (const auto& triplet : result) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}

