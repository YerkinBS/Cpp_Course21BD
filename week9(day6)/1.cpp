#include <bits/stdc++.h>
using namespace std;

void Vowels(string x, int i, string vowels = "aeiouAEIOU"){
    if(i == x.size()) return;
    if(vowels.find(x[i]) != -1) cout << x[i] << ' ';
    Vowels(x, i + 1, vowels);
}

int main(){
    string s; cin >> s;
    Vowels(s, 0);
}