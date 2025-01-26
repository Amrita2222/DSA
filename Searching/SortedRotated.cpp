#include <iostream>
#include <vector>
using namespace std;

int sortedRotated(vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;   // l=0, h=7-1=6

    while(low <= high) {
        int mid = (low + high)/ 2;   // m= 0+6= 3
        
        if(arr[mid] == target) {
            return mid; 
        }
         // {4, 5, 6, 7, 0, 1, 2};
        if(arr[low] <= arr[mid]) {
            if(arr[low] <= target && target < arr[mid]) { 
                high = mid - 1;
            } else { 
                low = mid + 1;
            }
        }
        // Right half is sorted
        else {
            if(arr[mid] < target && target <= arr[high]) { 
                low = mid + 1;
            } else { 
                high = mid - 1;
            }
        }
    }
    return -1; 
}

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2}; 
    int target = 0;
    int result = sortedRotated(nums, target);
    cout << " ans " << target << "is"  << result << endl;
    return 0;
}
