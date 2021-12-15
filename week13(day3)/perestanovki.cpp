#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b, c; cin >> a >> b >> c;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    do{
        if(stoi(a) + stoi(b) == stoi(c)){
            cout << "YES\n" << stoi(a) << ' ' << stoi(b);
            return 0;
        }
    }
    while(next_permutation(a.begin(), a.end()) && next_permutation(b.begin(), b.end()));
    cout << "NO";
}