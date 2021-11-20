#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    char most_further = 'a';
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= most_further) most_further = s[i];
    }
    cout << most_further;
}