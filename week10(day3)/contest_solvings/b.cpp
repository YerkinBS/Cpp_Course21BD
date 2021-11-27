#include <bits/stdc++.h>
using namespace std;
map<char, bool> lower, upper, nums;

void init(){
    for(char i = 'a'; i <= 'z'; i++) lower[i] = false;
    for(char i = 'A'; i <= 'Z'; i++) upper[i] = false;
    for(char i = '0'; i <= '9'; i++) nums[i] = false;
}

int main(){
    int n; cin >> n;
    init();
    while(n--){
        string s; cin >> s;
        for(int i = 0; i < s.size(); i++){
            if('0' <= s[i] && s[i] <= '9') nums[s[i]] = true;
            if('a' <= s[i] && s[i] <= 'z') lower[s[i]] = true;
            if('A' <= s[i] && s[i] <= 'Z') upper[s[i]] = true;
        }
    }
    cout << "Lower case: ";
    for(auto i : lower){
        if(!i.second) cout << i.first << ' ';
    }
    cout << "\nUpper case: ";
    for(auto i  : upper){
        if(!i.second) cout << i.first << ' ';
    }
    cout << "\nNumbers: ";
    for(auto i : nums){
        if(!i.second) cout << i.first << ' ';
    }
}