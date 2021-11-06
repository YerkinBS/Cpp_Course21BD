#include <bits/stdc++.h>
using namespace std;

void Rec_2(int a, int b){
    if(a == b - 1) return;
    cout << a << ' ';
    Rec_2(a - 1, b);
}

void Rec_1(int a, int b){
    if(a == b + 1) return;
    cout << a << ' ';
    Rec_1(a + 1, b);
}

int main(){
    int a, b; cin >> a >> b;
    if(a < b) Rec_1(a, b);
    else Rec_2(a, b);
}