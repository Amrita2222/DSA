#include<iostream>
#include<iostream>
#include<vector>
#include <deque>
#include <stack>
#include<queue>
#include<set>
// #include< map>
#include<unordered_map>
using namespace std;

int main(){
set<int> s;

s.insert(1);
s.insert(2);
s.insert(3);
s.insert(4);
s.insert(5);
s.insert(6);
// uniquely store data

// cout << "lower bound " << *(s.lower_bound(4)) << endl;
cout << "upper bound " << *(s.upper_bound(4)) << endl;

for(auto val: s){
    cout << val << " ";
}
 cout << endl;
 return 0; 
}