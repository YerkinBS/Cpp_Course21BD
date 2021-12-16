#include <bits/stdc++.h>
using namespace std;
map<char, vector<pair<string, int>>> mp;
map<char, vector<pair<string, int>>> :: iterator it;
vector<string> v;
string s;

string strip(string x){
    string cleaned = "";
    for(char a : x){
        if(isalpha(a)) cleaned += a;
    }
    return cleaned;
}

int main(){
    while(cin >> s) v.push_back(s);
    for(string x : v){
        for(int i = 0; i < x.size(); i++){
            if(isalpha(x[i])) mp[tolower(x[i])].push_back({strip(x), i});
        }
    }
    
    for(it = mp.begin(); it != mp.end(); it++){
        cout << "Occurences of: '" << it -> first << "' : ";
        for(int i = 0; i < it -> second.size(); i++){
            cout << '[' << it -> second[i].first << "; " << it -> second[i].second << ']' << ' ';
        }
        cout << '\n';
    }
}