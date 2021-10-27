#include <bits/stdc++.h>
using namespace std;

int Sum_Of_Digits(string x, int i){
    if(i == x.size() - 1) return x[i] - '0';
    return Sum_Of_Digits(x, i + 1) + (x[i] - '0');
}

int main(){
    string s; cin >> s;
    cout << Sum_Of_Digits(s, 0);
}
