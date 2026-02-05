#include <bits/stdc++.h>

using namespace std;

int main(){
    int t, v;
    double d;

    cin >> t >> v;
    d = v*t;

    cout << fixed;
    cout << setprecision(3);
    cout << d/12 << endl;

    return 0;
}