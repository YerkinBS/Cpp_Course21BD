#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    string num = "";
    int summ = 0, n;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            num += s[i];
        }
        else{
            if(num.size() != 0){
                n = stoi(num);
                summ += n;
                num = "";
            }
        }
    }

    if(num.size() != 0){
        n = stoi(num);
        num = "";
        summ += n;
    }
    cout << summ;
}