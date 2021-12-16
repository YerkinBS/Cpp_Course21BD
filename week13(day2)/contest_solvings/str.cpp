#include <bits/stdc++.h>
using namespace std;
set<string> st;

int main(){
    string p, t; int n;
    cin >> p >> n;

    int k = p.size();
    for(int i = 0; i < n; i++) t += p[i % k];

    for(int i = 0; i < t.size(); i++){
        for(int j = 0; j < t.size(); j++){
            st.insert(t.substr(i, j));
        }
    }
    cout << st.size();
}