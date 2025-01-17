#include<iostream>
using namespace std;

int main(){
    List<int> ls;

    ls.push_back(2); //{2}
    ls.emplace_back(2,4); // {2,4}
    ls.push_front(5);   // {2,3,5}

    ls.emplace_front(); {2,4};

    // rest function same as vector;
    // begin, rend, rbegin, clear, insert, size, swap
}