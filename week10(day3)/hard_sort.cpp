#include <bits/stdc++.h>
using namespace std;

bool cmp(vector<int> x, vector<int> y){
    int summ_x = 0, summ_y = 0;
    for(int i = 0; i < x.size(); i++) summ_x += x[i];
    for(int i = 0; i < y.size(); i++) summ_y += y[i];

    if(summ_x != summ_y) return summ_x < summ_y;
    if(x.size() != y.size()) return x.size() < y.size();
    return x < y;
}

int main(){
    vector<vector<int>> v;
    int n, m, x; cin >> n;
    while(n--){
        cin >> m;
        vector<int> row;
        while(m--){
            cin >> x;
            row.push_back(x);
        }
        v.push_back(row);
    }

    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++) cout << v[i][j] << ' ';
        cout << '\n';
    }
}