#include <bits/stdc++.h>
using namespace std;

int hcf(int x, int y){
    int i = max(x, y);
    while(i % x != 0 and i % y != 0) i += i;
    return i;
}

int main(){
    int x1, y1, x2, y2;
    char c;
    cin >> x1 >> c >> y1;
    cin >> x2 >> c >> y2;
    cout << y1 << " " << y2 << "\n";
    cout << hcf(y1, y2);
}