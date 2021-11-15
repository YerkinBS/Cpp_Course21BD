#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, vector<string>, greater <int>> m2;
    map<string, int> m1;
    string s;
    while(cin >> s) m1[s]++;
    for(auto i : m1) m2[i.second].push_back(i.first);
    for(auto i : m2){
        for(int k = 0; k < i.second.size(); k++){
            cout << i.second[k] << ": " << i.first << '\n';
        }
    }
}