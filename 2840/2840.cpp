#include <bits/stdc++.h>

using namespace std;

int main(){
    const double pi = 3.1415;
    int r,l;
    double v;

    cin >> r >> l;

    v = 4*pi*r*r*r/3;

    cout << int(l/v) << endl;

    return 0;
}