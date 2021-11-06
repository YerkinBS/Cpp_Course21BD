#include <bits/stdc++.h>
using namespace std;

int main(){
    multimap<int, int> mp;
    mp.insert(1, 1);
    mp.insert(1, 1);
    for(auto i : mp) cout << i.first << ' ' << i.second << '\n';
}