#include<iostream>
#include<vector>
#include <deque>
using namespace std;

int main(){
/*  pair<string, int> p = {"Rita",2};
    cout << p.first << endl;
    cout << p.second << endl;
    */

  /* pair<int,pair<char, int>> p = {1, {'a', 2}};
    cout << p.first << endl; //1
    cout << p.second.first << endl; // a
     cout << p.second.second << endl; // 2
    */

   vector<pair<int, int>> vec = {{1,2}, {2,3}, {3,4}};

//    add other value in last then
    vec.push_back({4,5}); // insert
    vec.emplace_back(4,5); // in-place object create
   for(pair<int, int> p : vec){   // also use auto
    cout << p.first << " " << p.second << endl;
   }
    return 0;
}