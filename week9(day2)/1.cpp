#include <bits/stdc++.h>
using namespace std;

int main(){
    map<char, int> mp;

    string s; cin >> s;
    for(int i = 0; i < s.size(); i++){
        mp[s[i]]++;
    }

    map<char, int> :: iterator it;
    for(it = mp.begin(); it != mp.end(); it++){
        cout << it -> second << ' ' << it -> first << '\n';
    }

    // for(auto i : mp){
    //     cout << i.second << ' ' << i.first << '\n';
    // }
}