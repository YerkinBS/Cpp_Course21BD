#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    
    if(!(s[0] >= 'A' and s[0] <= 'Z')){
        cout << "Invalid name";
        return 0;
    }

    if(!(s.size() >= 3 and s.size() <= 15)){
        cout << "Invalid name";
        return 0;
    }

    bool vowel = false;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y') vowel = true;
        if(s[i] == 'A' || s[i] ==   'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y') vowel = true;

        if(i != 0 and (s[i] >= 'A' and s[i] <= 'Z')){
            cout << "Invalid name";
            return 0;
        }
    }

    if(vowel) cout << "Hi, " << s;
    else cout << "Invalid name";
}