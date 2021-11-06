#include <bits/stdc++.h>
using namespace std;

bool IsPrime(int n){
    if(n < 2) return false;
    if(n == 2) return true;

    for(int i = 2; i < n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

bool Palindrome_Check(string s){
    string t = s;
    reverse(s.begin(), s.end());
    if(s == t) return true;
    return false;
}

int main(){
    // int n; cin >> n;
    // int cnt = 1, number = 2;

    // while(cnt != n){
    //     number++;
    //     if(IsPrime(number)) cnt++;
    // }
    // cout << number;


    string s; cin >> s;
    if(Palindrome_Check(s)) cout << "Palindrome";
    else cout << "Not palindrome";

}