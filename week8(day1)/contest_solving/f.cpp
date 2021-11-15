#include <bits/stdc++.h>
using namespace std;

int main(){
    multimap<int, string, greater <int>> mp;
    int n; cin >> n;
    string name; int points;
    
    while(n--){
        cin >> name >> points;
        mp.insert(pair<int, string> (points, name));
    }
    for(auto i : mp) cout << i.second << ' ' << i.first << '\n';
}