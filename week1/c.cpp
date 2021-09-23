#include <bits/stdc++.h>
using namespace std;
typedef string str;
typedef vector<int> vi;
typedef vector<bool> vb;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define fr(i, n) for(int i = 0; i < n; i++)
#define rall(x) (x).rbegin(), (x).rend()


void solve(){
    int year; cin >> year;
    if ((year % 4 == 0 and year % 400 == 0) or year % 100 != 0) cout << "YES";
    else cout << "NO";
}


int main(){
    solve();
}