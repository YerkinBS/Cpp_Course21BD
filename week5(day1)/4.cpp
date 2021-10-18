// n бургеров
// цена бургера d долларов и c центов
// Di долларов и Сi центов - первоначальная сумма
// если оплата за бургер превышает первоначальную сумму выводим -1

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long d, c, n; cin >> d >> c >> n;
    long long Di, Ci; cin >> Di >> Ci;

    long long payment = n * ((d * 100) + c);
    long long summ = (Di * 100) + Ci;

    if(payment > summ) cout << -1; 
    else{
        long long rem = summ - payment;
        cout << rem / 100 << "dollars " << rem % 100 << " cents";
    }
}


// int (-10^9; 10^9)
// unsigned int (0; 10^18) 10^9 + 10^9 only positive
