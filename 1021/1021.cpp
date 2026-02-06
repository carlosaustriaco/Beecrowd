#include <bits/stdc++.h>

using namespace std;

int main(){
    int r, f;
    int c100, c50, c20, c10, c5, c2;
    int m100,m50,m25,m10,m5,m1;
    double n;

    cin >> n;
    r = floor(n);
    f = int((n-r)*100);

    c100 = r/100;
    r -= c100*100;
    c50 = r/50;
    r -= c50*50;
    c20 = r/20;
    r -= c20*20;
    c10 = r/10;
    r -= 10*c10;
    c5 = r/5;
    r -= 5*c5;
    c2 = r/2;
    r -= c2*2;
    m100 = r;
    m50 = f/50;
    f -= m50*50;
    m25 = f/25;
    f -= m25*25;
    m10 = f/10;
    f -= m10*10;
    m5 = f/5;
    f -= m5*5;
    m1 = f;

    cout << "NOTAS:" << endl;
    cout << c100 << " nota(s) de R$ 100.00" << endl;
    cout << c50 << " nota(s) de R$ 50.00" << endl;
    cout << c20 << " nota(s) de R$ 20.00" << endl;
    cout << c10 << " nota(s) de R$ 10.00" << endl;
    cout << c5 << " nota(s) de R$ 5.00" << endl;
    cout << c2 << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << m100 << " moeda(s) de R$ 1.00" << endl;
    cout << m50 << " moeda(s) de R$ 0.50" << endl;
    cout << m25 << " moeda(s) de R$ 0.25" << endl;
    cout << m10 << " moeda(s) de R$ 0.10" << endl;
    cout << m5 << " moeda(s) de R$ 0.05" << endl;
    cout << m1 << " moeda(s) de R$ 0.01" << endl;

    return 0;
}