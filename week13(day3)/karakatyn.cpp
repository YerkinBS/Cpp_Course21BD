#include <bits/stdc++.h>
using namespace std;
map<char, int> mp;

int main(){
    string s, t;
    getline(cin, s);
    getline(cin, t);

    for(char x : s) mp[x]++;
    for(char x : t) mp[x]++;

    if(mp['6'] == 4 && mp['7'] == 4 && mp['8'] == 4 && mp['9'] == 4
        && mp['1'] == 4 && mp['J'] == 4 && mp['K'] == 4 && mp['A'] == 4
        && mp['Q'] >= 1) cout << "Karakatyn";
    else cout << "Sad";
}