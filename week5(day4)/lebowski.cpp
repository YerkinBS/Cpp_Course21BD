#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, n; cin >> a >> n;
    int b, k; cin >> b >> k;

    while(n--) a /= 2;

    while(k--) b /= 2;

    if(a == b) cout << "Money was found";
    else cout << "Where is the money Lebowski?";
}