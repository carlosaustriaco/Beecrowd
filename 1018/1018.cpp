#include <bits/stdc++.h>

using namespace std;

int main(){
    int c100, c50, c20, c10, c5, c2, c1;
    string str = " nota(s) de R$ ";
    int n;

    cin >> n;
    cout << n << endl;
    c100 = n/100;
    n -= 100*c100;
    c50 = n/50;
    n -= 50*c50;
    c20 = n/20;
    n -= 20*c20;
    c10 = n/10;
    n -= 10*c10;
    c5 = n/5;
    n -= 5*c5;
    c2 = n/2;
    n -= c2*2;
    c1 = n;

    cout << c100 << str << "100,00" << endl;
    cout << c50 << str << "50,00" << endl;
    cout << c20 << str << "20,00" << endl;
    cout << c10 << str << "10,00" << endl;
    cout << c5 << str << "5,00" << endl;
    cout << c2 << str << "2,00" << endl;
    cout << c1 << str << "1,00" << endl;
    
    return 0;
}