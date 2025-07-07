#include<iostream>
#include<vector>
#include <deque>
#include <stack>
#include<queue>
// #include< map>
#include<unordered_map>
using namespace std;

// int main(){
//     map<string, int> n;
//     n["tv"] = 100;
//     n["laptop"] = 100;
//     n["headphone"] = 50;
//     n["books"] = 30;  // acessanding order

//     // n.insert({"camera", 20});
//         n.emplace("camera", 25);

//     for(auto p : n){
//         cout << p.first << " "<< p.second << endl;
//     }

//     // cout << " count = " << n["laptop"] << endl;
//     if(n.find("camera") != n.end()){
//         cout << "find\n";
//     }
//     else{
//          cout << "not find\n";
//     }
//     return 0;
// }


//multi map
// int main(){
//     multimap<string, int> m;
//     m.emplace("tv", 100);
//     m.emplace("tv", 100);
//     m.emplace("tv", 100);
//     m.emplace("tv", 100);

//     m.erase(m.find("tv"));

//     for(auto p : m){
//         cout << p.first << p.second << endl;
//     }
//     return 0;
// }


// unordermap 
int main(){
    unordered_map<string, int> m;

    m.emplace("tv", 100);
     m.emplace("laptop", 100);
     m.emplace("computer", 100);
     m.emplace("watch", 100);

     for(auto p: m){
        cout << p.first << " " << p.second << endl;
     }
     return 0;
}