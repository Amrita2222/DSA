// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

void selection_sort( int arr[], int n ){
    for(int i = 0; i <= n-2; i++){
        int minimum = i;
        for(int j = i; j <= n-1; j++){
            if(arr[j] < arr[minimum]){
                minimum = j;
            }
        }
        int temp = arr[minimum];
        arr[minimum] =  arr[i];
        arr[i] = temp;
    }
}
 
void selection(int arr[], int n ){
    for(int i =0; i < n-1; i++){
        int sm= i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[sm]){
                sm = j;
            }
        }
        swap(arr[i], arr[sm]);
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i= 0; i < n; i++){
        cin >> arr[i]; 
    }

    // selection_sort(arr, n);
    selection(arr,n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}