#include <bits/stdc++.h>
using namespace std;
vector<string> v;
string vowels = "AEIOUaeiou";

bool cmp(string x, string y){
    int vow_x = 0, vow_y = 0, dig_x = 0, dig_y = 0;
    for(int i = 0; i < x.size(); i++){
        if(vowels.find(x[i]) != -1) vow_x++;
        else if(isdigit(x[i])) dig_x++;
    }
    for(int i = 0; i < y.size(); i++){
        if(vowels.find(y[i]) != -1) vow_y++;
        else if(isdigit(y[i])) dig_y++;
    }
    if(vow_x != vow_y) return vow_x > vow_y;
    if(dig_x != dig_y) return dig_x < dig_y;
    return x > y;
}

int main(){
    int n; cin >> n;
    while(n--){
        string s; cin >> s;
        v.push_back(s);
    }
    sort(v.begin(), v.end(), cmp);
    for(string s : v) cout << s << '\n';
}