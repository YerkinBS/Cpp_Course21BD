#include <bits/stdc++.h>
using namespace std;

int main(){
    double n, m, b; cin >> n >> m >> b;
    double full = n + m;
    double perc = (b * 100) / full;
    cout << (perc > 10 ? "Boris, you are punished!" : "You are my sweet baby");
}