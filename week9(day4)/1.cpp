#include <bits/stdc++.h>
using namespace std;

// void rec(int n, int i = 1){
//     if(i > n) return;
//     cout << i << ' ';
//     rec(n, i + 1);
// }

int Summ_Of_All(int summ, int n){
    if(n == 0) return summ;
    return Summ_Of_All(summ + n, n - 1);
}

int main(){
    int n; cin >> n;
    cout << Summ_Of_All(0, n);

    // for(int i = n; i >= 0; i--)
}


// 5

// n + (n - 1) + ((n - 1) - 1) 

// n++ : n = n + 1
// n++ : n = n + 1