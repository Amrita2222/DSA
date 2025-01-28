#include<iostream>
#include<algorithm>
#include<vector>
using  namespace std;

int repeatingElement(int arr[], int dup){
    for(int i = 0; i< dup; i++){
        for(int j = i+ 1; j < dup; j++){
            if(arr[i] == arr[j]){
                return arr[i];
            }
        }
    }
    return -1;
}

#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int>& nums) {
    int low = 1, high = nums.size() - 1;
    while (low < high) {
        int mid = low + (high - low) / 2;
          if (nums[mid] > mid + 1) 
            high = mid;
        else 
            low = mid + 1;
    }
    return   nums[low];  
}



int main(){
    vector<int> nums = {1, 3, 2, 3, 4, 4, 5, 5};
    int arr[] = {1, 3, 2, 3, 4, 4, 5, 5};
    int dup = sizeof(arr)/sizeof(arr[0]);
    cout << "Duplicate element is: " << findDuplicate(nums) << endl;
    cout << "Repeating element is: " << repeatingElement(arr, dup) << endl;
    return 0;
}