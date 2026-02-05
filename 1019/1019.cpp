#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, h, m, s;

    cin >> n;
    h = n / 3600;
    n -= h*3600;
    m = n/60;
    n -= m*60;
    s = n;

    cout << h << ":" << m << ":" << s << endl;

    return 0;
}