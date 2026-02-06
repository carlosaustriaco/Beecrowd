#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, m, d;

    cin >> n;
    a = n/365;
    n -= a*365;
    m = n/30;
    n -= m*30;
    d = n;

    cout << a << " ano(s)" << endl;
    cout << m << " mes(es)" << endl;
    cout << d << " dia(s)" << endl;
    
    return 0;
}