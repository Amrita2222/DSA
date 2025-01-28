#include<iostream>
#include<vector>
using namespace std;
int singleNonDuplicate(vector<int>& nums) {
     int low = 0, high = nums.size()  - 1;
        while(low < high){
            int mid = (low + high) / 2;
          if(mid % 2 == 1){
              mid--;
          }
            if(nums[mid] == nums[mid + 1]){
                low = mid + 2;
            }
           
            else{
                high = mid;
            }
        }
        return nums[low];
}

int singleDuplicate(vector<int>& nums){
    int left = 0, right = nums.size() - 1;
    int n = nums.size();
    for(int i = 0; i < n; i++){
        if( i == 0){  // left side element
            if(nums[i] != nums[i + 1]){
                return nums[i];
            }
        }
        else if(i == n - 1){  // right side element
            if(nums[i]!= nums[i - 1]){
                return nums[i];
            }
        }
        else{  // middle element
            if(nums[i] != nums[i - 1] && nums[i] != nums[i + 1]){
                return nums[i];
            }
        }
    }
    
      
      
}

int main(){
    vector<int> arr = {1,1,2,3,3,4,4,8,8};
    cout <<"not duplicate element is :" << singleNonDuplicate(arr) << endl;
    cout <<"single non duplicate : " << singleDuplicate(arr) << endl;
    return 0;
}


