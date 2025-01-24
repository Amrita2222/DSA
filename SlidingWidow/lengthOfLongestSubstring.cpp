#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int lengthOfLongestSubstring(string s) {
   int n =  s.size();     
   int l =0, r = 0, maxlen = 0;
   vector<int> hash(256, -1);

   while(r < n){
    if(hash[s[r]] != -1 && hash[s[r]] >= 1){
        l = hash[s[r]] + 1;
    }
    hash[s[r]] = r;
    maxlen = max(maxlen, r-l+1);
    r++;
   }
   return maxlen;
}

int main(){
    string  s = "ababc";
    cout << "Length of Longest Substring Without Repeating Characters: " << lengthOfLongestSubstring(s) << endl;
    return 0;
}