#include <bits/stdc++.h>
using namespace std;

bool IsPalindromePermut(string x, int cnt = 0, int exc = 0){
    for(int i = 0; i < x.size(); i++){
        cnt = 0;
        for(int j = 0; j < x.size(); j++){
            if(x[i] == x[j]) cnt++;
        }
        if(cnt == 1) exc++;
        if(cnt % 2 != 0 && exc > 1) return false;
    }
    return true;
}

bool IsPalindrome(string x){
    string s = x;
    reverse(x.begin(), x.end());
    return s == x;
}

int main(){
    int n; cin >> n;
    string s = "";
    while(n--){
        int x; cin >> x;
        s += to_string(x);
    }

    if(!IsPalindromePermut(s)) cout << "Impossible";
    else{
        sort(s.begin(), s.end());
        do{
            if(IsPalindrome(s)){
                for(int i = 0; i < s.size(); i++){
                    cout << s[i] << ' ';
                }
                return 0;
            }
        }
        while(next_permutation(s.begin(), s.end()));
    }
}