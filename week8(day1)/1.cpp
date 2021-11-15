#include <bits/stdc++.h>
using namespace std;

int main(){
    multimap<int, int> mp;
    map<int, int> m;

    m[1] = 10;
    m[1] = 20;

    mp.insert(pair<int, int> (1, 10));
    mp.insert(pair<int, int> (1, 20));

    for(auto i : mp) cout << i.first << " " << i.second << "\n";
}