#include<iostream>
#include<vector>
#include <deque>
#include <stack>
#include<queue>
using namespace std;

// int main(){
//     priority_queue<int> q;

//     q.push(10);
//      q.push(3);
//       q.push(5);
    
//    while(!q.empty()){
//     cout << q.top() << " ";
//     q.pop();
//    }
//    cout << endl;
//     return 0;  
// }

int main(){
    priority_queue<int,vector<int>,greater<int>> q;

    q.push(10);
     q.push(3);
      q.push(5);
    
   while(!q.empty()){
    cout << q.top() << " ";
    q.pop();
   }
   cout << endl;
    return 0;  
}