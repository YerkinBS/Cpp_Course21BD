#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> v;

bool cmp(vector<string> x, vector<string> y){
    if(x[2] != y[2]) return x[2] < y[2];
    if(x[1] != y[1]) return x[1] < y[1];
    return x[0] < y[0];
}

int main(){
    int n; cin >> n;
    string s;
    while(n--){
        vector<string> row;
        cin >> s;
        row.push_back(s.substr(0, 2));  
        row.push_back(s.substr(3, 2));  
        row.push_back(s.substr(6, 4));
        v.push_back(row);
    }
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < v.size(); i++){
        cout << v[i][0] << '-' << v[i][1] << '-' << v[i][2] << '\n';
    }
}