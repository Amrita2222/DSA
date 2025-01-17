#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n){
    for( int i= n-1; i >=1;  i--){
        
        for(int j =0;  j <= i-1;  j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }
    }
}

// suppose number are all ready sort
void bubble_sort(int arr[], int n){
    for( int i= n-1; i >=1;  i--){
        
        int didswap = 0;
        for(int j =0;  j <= i-1;  j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                didswap = 1;
            }
        }
        if(didswap == 1){
            break;
        }
        cout << "runs\n";

    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
       cin >>  arr[i];
    }

    bubble_sort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

