#include<iostream>
#include<iostream>
#include<vector>
#include <deque>
#include <stack>
#include<queue>
#include<set>
// #include< map>
#include<unordered_map>
#include<algorithm> 
using namespace std;


int main(){
// int arr[4] = {1,2,5,6 };
// sort(arr, arr+5);

vector<int > vec  = {1,2,3,4};
// sort(vec.begin(), vec.end());
sort(vec.begin(), vec.end(), greater<int>());

for(int val : vec) {
    cout <<  val << " ";
}
 cout << endl;
 return 0; 
}
