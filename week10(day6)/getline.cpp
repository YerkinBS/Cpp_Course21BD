#include <bits/stdc++.h>
using namespace std;
vector<string> v;

int main(){
    string s; getline(cin, s);
    int curr = 0;
    for(int i = 0; i <= s.size(); i++){
        if(s[i] == ' ' || i == s.size()){
            v.push_back(s.substr(curr, i - curr));
            curr = i + 1;
        }
    }

    for(int i = 0; i < v.size(); i++) cout << v[i] << '\n';
}