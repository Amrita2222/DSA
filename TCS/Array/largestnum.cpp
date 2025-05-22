// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int largestArr(vector<int>& element){
//     sort(element.begin(), element.end());
//     return element[element.size()-1];
// }
// int main(){
//     vector<int> arr1 = {3,6,8,8,3,1,77,444};
//     cout << "largest element of array :" << largestArr(arr1);
//     return 0;
// }

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int getElement(int n, vector<int>& arr)
{
    if (n <= 1)  // Check if size is 0 or 1
    {
        cout << -1 << " " << -1 << endl;
       
    }
    sort(arr.begin(), arr.end());  // Sort the vector

    int small = arr[1];  // Second smallest
    int large = arr[n - 2];  // Second largest

    cout << "Second smallest is " << small << endl;
    cout << "Second largest is " << large << endl;
}

int main(){
    vector<int> arr = {1, 2, 4, 6, 75, 3};
    int n = arr.size();  // Correct size calculation
    getElement(n, arr);
    return 0;
}
