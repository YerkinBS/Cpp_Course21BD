#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin, s);
    for(int i = 0; i < s.size(); i++){
        if(i == 0) s[i] = toupper(s[i]);
        else if(s[i - 1] == ' ') s[i] = toupper(s[i]);
    }
    cout << s;

    // string s;
    // string arr[100];
    // int ind = 0;
    // while(cin >> s){
    //     s[0] = toupper(s[0]);
    //     arr[ind] = s;
    //     ind++;
    // }
    // for(int i = 0; i < ind; i++) cout << arr[i] << ' ';
}