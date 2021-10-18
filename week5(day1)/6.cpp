#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; getline(cin, s);
    for(int i = s.size() - 1; i >= 0; i--){
        if(s[i] >= '0' and s[i] <= '9') cout << s[i];
    }
}



// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     string s; getline(cin, s);
//     string t = "";
//     for(int i = 0; i < s.size(); i++){
//         if(s[i] >= '0' and s[i] <= '9'){
//             t += s[i];
//         }
//     }

//     for(int i = t.size() - 1; i >= 0; i--) cout << t[i];
// }