#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, string, greater<int>> mp;
    string info, point;
    int n; cin >> n;
    for(int i = 0; i < n + 1; i++){
        getline(cin, info);
        if(i == 0) continue;
        point = info.substr(info.size() - 2, info.size() - 1);
        mp[stoi(point)] = info.substr(0, info.size() - 3);
    }

    for(auto i : mp){
        cout << i.second << ' ' << i.first;
        break;
    }
}