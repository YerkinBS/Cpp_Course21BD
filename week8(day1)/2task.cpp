#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> v;
    string s;
    while(cin >> s) v.push_back(s);
    map<char, vector<pair<int, int>>> mp;
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            mp[v[i][j]].push_back(pair<int, int> (i + 1, j + 1));  
        }
    }
    map<char, vector<pair<int, int>>> :: iterator it;
    for(it = mp.begin(); it != mp.end(); it++){
        cout << "Occurences of: " << it -> first << " = ";
        for(int i = 0; i < it -> second.size(); i++){
            cout << '[' << it -> second[i].first << " " << it -> second[i].second << ']' << ' ';
        }
        cout << '\n';
    }
}