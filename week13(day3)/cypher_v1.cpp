#include <bits/stdc++.h>
using namespace std;
string s;
char a = 'a';
map<char, string> alpha;
vector<string> v;

void to_Numeric(string x){
    for(int i = 0; i < x.size(); i++){
        if(isalpha(x[i])) v.push_back(alpha[tolower(x[i])]);
        else if(x[i] == ' ') v.push_back(" ");
        else{
            string t;  t += x[i];
            v.push_back(t);
        }
    }
}

string to_binary(int x){
    string bin = "";
    while(bin.size() < 5){
        bin += char(x % 2) + '0';
        x /= 2;
    }
    reverse(bin.begin(), bin.end());
    return bin;
}

bool is_Num(string x){
    for(int i = 0; i < x.size(); i++){
        if(!isdigit(x[i])) return false;
    }
    return true;
}

int main(){
    for(int i = 1; i <= 26; i++) alpha[a++] = to_string(i);
    getline(cin, s); to_Numeric(s);
    
    for(int i = 0; i < v.size(); i++){
        if(is_Num(v[i])) cout << to_binary(stoi(v[i]));
        else cout << v[i];
    }
}