#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; 
    

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // // Find the largest element
    int largestElement = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largestElement) {
            largestElement = arr[i];
        }
    }

    cout << "The largest element is: " << largestElement << endl;
    return 0;
}
