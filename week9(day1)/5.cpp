#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, largest = "";
    while(cin >> s){
        if(s.size() > largest.size()) largest = s;
    }
    cout << largest;
}