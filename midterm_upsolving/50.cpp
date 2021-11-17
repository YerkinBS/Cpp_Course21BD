#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    string arr[100];
    int cnt = 0;
    while(cin >> s){
        if(s.size() >= 3) arr[cnt++] = s;
    }
    for(int i = 0; i < cnt; i++) cout << arr[i] << ' ';
}