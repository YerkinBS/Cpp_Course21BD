#include <bits/stdc++.h>
using namespace std;

bool cmp(string a, string b){
    int a_cnt = 0, b_cnt = 0;
    for(int i = 0; i < a.size(); i++){
        if(isdigit(a[i])) a_cnt++;
    }
    for(int i = 0; i < b.size(); i++){
        if(isdigit(b[i])) b_cnt++;
    }
    return a_cnt > b_cnt;
}

int main(){
    vector<string> v;
    int n; cin >> n;
    while(n--){
        string x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < v.size(); i++) cout << v[i] << ' ';
}


// dfghj23sdff8 sdbfkkbfsdf9 dlknfsdnfl ndssn0dsf88s9f0sdf8

// dlknfsdnfl sdbfkkbfsdf9 dfghj23sdff8 ndssn0dsf88s9f0sdf8