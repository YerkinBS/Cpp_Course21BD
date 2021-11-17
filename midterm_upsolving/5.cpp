#include <bits/stdc++.h>
using namespace std;

int f(int x, int y){
    return x ^ y;
}

int g(int x, int y){
    return f(x, f(y, x + y));
}

int main(){
    int x, y; cin >> x >> y;
    cout << g(x, y);
}