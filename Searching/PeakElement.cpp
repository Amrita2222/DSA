#include<iostream>
#include<vector>
using namespace std;


int  peakElement(vector<int>& nums){
    int low = 0, high = nums.size() -1;
    while(low < high){
        int mid = (low + high)/2;
        if(nums[mid] < nums[mid+1]){
           
            low = mid + 1;
        }
        else{
            high = mid; 
        }
    }
    
}
   int findPeakElement(vector<int>& nums) {
     int n = nums.size();
     
     for(int i = 0; i < n; i++){
        if(i == 0 && nums[i] > nums[i+1]){
          return i;
        }
        if(i == n-1 && nums[i] > nums[i-1]){
          return i;
        }
        if(nums[i] > nums[i-1] && nums[i] > nums[i+1]){
          return i;
        }
     }
     return -1;
    
    }

    int main(){
        vector<int> nums = {1,2,3,1};
        cout <<"index is : " <<  findPeakElement(nums) << endl;
        cout <<"index is : " <<  peakElement(nums) << endl;  
    }


