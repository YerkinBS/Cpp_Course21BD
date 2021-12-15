#include <bits/stdc++.h>
using namespace std;
string s, t;
char a = 'a';
map<int, char> alpha;

int to_decimal(string bin){
    int x, pw = bin.size() - 1;
    int ans = 0;
    for(int i = 0; i < bin.size(); i++){
        x = bin[i] - '0';
        ans += (x * pow(2, pw--));
    }
    return ans;
}

int main(){
    for(int i = 1; i <= 26; i++) alpha[i] = a++;
    getline(cin, s);
    
    int i = 0;
    while(i < s.size()){
        if(isdigit(s[i])){
            t = s.substr(i, 5);
            i += 5;
            cout << alpha[to_decimal(t)];
        }
        else cout << s[i++];
    }
}