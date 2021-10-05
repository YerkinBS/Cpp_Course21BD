#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    int zeros = 0, odds = 0, evens = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            int x; cin >> x;
            if(x == 0) zeros++;
            else if(x % 2 == 0) evens++;
            else odds++;
        }
        
    }
}