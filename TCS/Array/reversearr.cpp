#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int reverse(vector<int> &arr)
{
    int n = arr.size();
    vector<int> temp(n);

    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[n - i - 1];
    }

    cout << " reverse Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
}

// Optimal
void  reversearray(vector<int>& arr){
    int start =0, end = arr.size()-1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for(int i= 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout<< endl;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    // reverse(arr);
    reversearray(arr);
    return 0;
}