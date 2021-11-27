#include <bits/stdc++.h>
using namespace std;
int c = 65;

void alph_matr(int n, int i = 0){
    if(i >= n) return;
    for(int j  = 0; j < i + 1; j++){
        cout << char(c++) << ' ';
        while(c > 90) c -= 26;
    }
    cout << '\n';
    alph_matr(n, i + 1);
}

int main(){
    int n; cin >> n;
    alph_matr(n);
}