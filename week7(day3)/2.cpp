#include <bits/stdc++.h>
using namespace std;

int Rec(vector<int> x, int summ, int i, int cnt, int size){
    if(i == size){
        return(summ / cnt); 
    }
    return Rec(x, summ + x[i], i + 1, cnt + 1, size);
}

int main(){
    vector<int> v;
    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        v.push_back(x);
    }
    cout << Rec(v, 0, 0, 0, v.size());
}


// ++i Одно и то же i = i + 1
// в рекурсии нам надо возвращать i + 1 (++i нежелательно)