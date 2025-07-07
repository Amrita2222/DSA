#include<iostream>
#include<vector>
#include <list>
using namespace std;

// int main(){
//     vector<int> vec; // 0
//     vec.push_back(1); // 1
//      vec.push_back(2);
//       vec.push_back(3);

//     vec.emplace_back(6);

//     vec.pop_back();
//       for(int val : vec){
//         cout << val << " ";
//       }

//    // cout << vec.size() << endl;
//    // cout << vec.capacity() << endl;

//    cout << endl;

//    //cout << " value of index 2 :" << vec[2] << "or " << vec.at(2) << endl;

//    cout << " first " << vec.front( ) << endl;
//     cout << "back " << vec.back() << endl;
//     return 0;
// }

// int main(){
//     // vector<int> vec = {1,2,3,4,5,6};
//     vector<int> vec(3,10); // dynamic programming - tabulation 
//     for(int val : vec){
//         cout << val <<  " ";
//     }
//     cout << endl;
//     return 0;
// }


// int main(){
// //  vector<int> vec1 = {1,2,3,4,5,6};
// vector<int> vec = {1,2,3,4,5,6};
// // vec.erase(vec.begin() + 2);
// vec.insert(vec.begin() +2, 100);
//      for(int val : vec){
//          cout << val <<  " ";}
//      cout << endl;
//      return 0;
// }

// int main(){
//     vector<int> vec = {1,2,3,4,5,6};
//     vector<int>::iterator it;

//     for(it = vec.begin(); it != vec.end(); it++ ){   // forward loop
//         cout << *(it) << " ";
//     }

//     cout << endl;
//     return 0;
// }


// int main(){
//     vector<int> vec = {1,2,3,4,5,6};
//     vector<int>::reverse_iterator it;

//     for( auto it = vec.rbegin(); it != vec.rend(); it++ ){   // backward loop
//         cout << *(it) << " ";
//     }

//     cout << endl;
//     return 0;
// }
