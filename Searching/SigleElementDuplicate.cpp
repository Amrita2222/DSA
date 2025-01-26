#include<iostream>
#include<vector>
using namespace std;
  int singleNonDuplicate(vector<int>& nums) {
     int low = 0, high = nums.size()  - 1;

        while(low < high){
            int mid = (low + high) / 2;
            if(nums[mid ]){

            }
            else{

            }
        }

}

int main(){
    vector<int> arr = {1,1,2,3,3,4,4,8,8};
    cout << singleNonDuplicate(arr) << endl;
    return 0;
}
