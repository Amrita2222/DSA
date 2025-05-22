#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int smallArr(vector<int>& arr){
    sort(arr.begin(), arr.end());
    return arr[0];
}
int main(){
    vector<int>arr1 = {2,7,3,8,5,1,0};

    cout << " smallest element in the array: " << smallArr(arr1);
    return 0;
}
