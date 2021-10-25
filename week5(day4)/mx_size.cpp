#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin, s);

    int cur = 0;
    int arr_size = 1;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' ') arr_size++;
    }
    string arr[arr_size];
    arr_size = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == ' '){
            arr[arr_size++] = s.substr(cur, i - cur);
            cur = i + 1;
        }
        else if(i + 1 == s.size()){
            arr[arr_size++] = s.substr(cur, i + 1);
        }
    } 

    int mx_len = arr[0].size();

    for(int i = 1; i < arr_size; i++){
        if(arr[i].size() > mx_len){
            mx_len = arr[i].size();
        }
    }

    cout << mx_len;
}