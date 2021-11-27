#include <bits/stdc++.h>
using namespace std;
map<string, string> mp;
string country, city;
vector<string> query;
int num;

int main(){
    int n; cin >> n;
    while(n--){
        cin >> country >> num;
        while(num--){
            cin >> city;
            mp[city] = country;
        }
    }
    int m; cin >> m;
    while(m--){
        cin >> city;
        query.push_back(city);
    }
    cout << query.size() << '\n';
    for(int i = 0; i < query.size(); i++){
        cout << (mp[query[i]].size() != 0 ? mp[query[i]] : "Unknown") << '\n';
    }
}