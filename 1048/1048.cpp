#include <bits/stdc++.h>

using namespace std;

int main(){
    double s, r;
    int p;

    cin >> s;

    if (s <= 400)
        p = 15;
    else if (s <= 800)
        p = 12;
    else if (s <= 1200)
        p = 10;
    else if(s<=2000)
        p=7;
    else
        p=4;

    cout << setprecision(2);
    cout << fixed;

    cout << "Novo salario: " << s*(1+p/100.0) << endl;
    cout << "Reajuste ganho: " << s*p/100 << endl;
    cout << "Em percentual: " << p << " %" << endl;

    return 0;
}