#include <bits/stdc++.h>

using namespace std;

int main(){
    string n;
    double f;
    double v;

    cin >> n >> f >> v;
    cout << fixed;
    cout << setprecision(2);
    cout << "TOTAL = R$ " << f + 0.15*v << endl;

    return 0;
}