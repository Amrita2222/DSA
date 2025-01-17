#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<int> v;

//    v.push_back(1);
//    v.emplace_back(2);

int n;
cin >> n;



for(int i=0; i < n; i++){
    cin >> push_back(v[i]);
}
// cout << endl;


//    vector<pair<int, int>>vec;

//     v.push_back({1,2});
//    v.emplace_back({1,2});

//    vector<int> v(5,100);

//     vector<int> v1(5,20);
//     vector<int> v2(v1);

//     vector<int>::iteration it = v.begin();

    // it++;
    // cout <<*(it) << " ";

    // it = it + 2;
    // cout <<*(it) << " ";

    // vector<int>::iteration it = v.end();
    // vector<int>::iteration it = v.rend();
    // vector<int>::iteration it = v.rbegin();

    // cout << v[0] << " " << v.ar[0];
    // cout << v.back() << " ";

    // for(vector<int>::iteration it = v.begin(); it != v.end(); it++){
    //     cout << *it << " ";
    // }

    // for(int i = 0; i < v.size(); i++){
    //     cout << v[i] << " ";
    // }
    // cout << endl;

    // for(auto it = v.begin(); it != v.end(); it++){
    //     cout << *it << " ";
    // }
    // cout << endl;

    // for(vector<int>:: iterator it = v.begin(); it != v.end(); it++){
    //     cout << *it << " ";
    // }
    // cout << endl;

    for(auto it : v){
        cout << it << " ";
    }
  
}