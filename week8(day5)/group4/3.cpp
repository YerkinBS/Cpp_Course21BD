#include <bits/stdc++.h>
using namespace std;

int main(){
    deque<char> d;

    string s; cin >> s;
    for(int i = 0; i < s.size(); i++) d.push_back(s[i]);

    while(!d.empty()){
        if(d.front() != d.back()){
            cout << "Not palindrome";
            return 0;
        }
        d.pop_back(); d.pop_front();
    }
    cout << "Palindrome";
}