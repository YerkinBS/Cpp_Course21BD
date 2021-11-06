#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<char, int>> v;

    for(int i = 1; i <= 10; i++){
        v.push_back(pair<char, int> ('a', i));
    }

    for(auto i : v) cout << i.first << ' ' << i.second << '\n';
}