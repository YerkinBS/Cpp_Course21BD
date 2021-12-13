#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    string num = s.substr(1, 3), x = s.substr(4, 2);
    sort(num.begin(), num.end());
    sort(x.begin(), x.end());
    do{
        do cout << s[0] << num << x << '\n';
        while(next_permutation(x.begin(), x.end()));
    }
    while(next_permutation(num.begin(), num.end())); 
}

