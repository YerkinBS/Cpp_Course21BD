#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> v;
    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++){
        vector<int> row;
        for(int j = 0; j < m; j++){
            int x; cin >> x;
            row.push_back(x);
        }
        v.push_back(row);
    }

    for(int i = 0; i < v.size(); i++){
        if(i % 2 == 0) sort(v[i].begin(), v[i].end());
        else sort(v[i].rbegin(), v[i].rend());
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << ' ';
        }
        cout << '\n';
    }
}