#include <bits/stdc++.h>
using namespace std;
vector<pair<string, int>> v;
string name, surname, ans;
int n, mn, point;

int main(){
    cin >> n;
    while(n--){
        cin >> name >> surname >> point;
        ans = name + " " + surname;
        v.push_back({ans, point});
    }
    cin >> mn;
    for(int i = 0; i < v.size(); i++){
        if(v[i].second < mn){
            cout << v[i].first << " didn't pass the endterm. ";
            cout << "He lacks " << mn - v[i].second << (mn - v[i].second != 1 ? " points.\n" : " point.\n");
        }
        else cout << v[i].first << " pass the endterm.\n";
    }
}