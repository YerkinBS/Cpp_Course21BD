#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    double full_perc = 0;
    map<string, vector<int>> mp;
    while(n--){
        string name; int point;
        cin >> name >> point;
        full_perc += point;
        mp[name].push_back(point);
    }

    map<double, string, greater<double>> fin;
    double summ;
    for(auto el : mp){
        summ = 0;
        for(int i = 0; i < el.second.size(); i++){
            summ += el.second[i];
        }
        fin[summ / full_perc] = el.first;
    }
    for(auto i : fin) cout << i.second << ' ' << i.first * 100 << "%\n";
}