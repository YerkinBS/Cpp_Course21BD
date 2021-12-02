#include <bits/stdc++.h>
using namespace std;
vector<vector<char>> v;

bool Power_Of_Two(int x){
    int i = 1;
    while(i < x) i *= 2;
    return i == x;
}

int main(){
    int n, curr, cnt; cin >> n;
    string s, word;
    for(int k = 0; k <= n; k++){
        getline(cin, s);
        vector<char> row; curr = 0;
        for(int i = 0; i <= s.size(); i++){
            if(s[i] == ' ' || i == s.size()){
                word = s.substr(curr, i - curr);
                cnt = 0;
                curr = i + 1;
                for(int j = 0; j < word.size(); j++){
                    if(tolower('a' <= word[j]) && tolower(word[j]) <= 'z') cnt++;
                }
                if(Power_Of_Two(cnt)) row.push_back('H');
                else row.push_back('C');
            }
        }
        v.push_back(row);
    }

    for(int i = 1; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << ' ';
        }
        cout << '\n';
    }
}