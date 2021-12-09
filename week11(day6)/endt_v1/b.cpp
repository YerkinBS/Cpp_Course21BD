#include <bits/stdc++.h>
using namespace std;
string s, alphabet = "";

int main(){
    cin >> s;
    char x = 'a';
    while(alphabet.size() != 26) alphabet += x++;
    for(int i = 0; i < s.size(); i++) cout << alphabet[alphabet.size() - alphabet.find(s[i]) - 1];
}