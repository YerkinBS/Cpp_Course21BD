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
    int n; cin >> n;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i + j >= n - 1) cout << "[*]";
            else cout << "   ";
        }
        cout << "\n";
    }
}


int main(){
    solve();
}