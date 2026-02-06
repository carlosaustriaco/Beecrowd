#include <bits/stdc++.h>

using namespace std;

int main(){
    unordered_map<int, double> un = {
        {1,4.0},
        {2,4.5},
        {3,5},
        {4,2},
        {5,1.5}
    };
    int c, q;

    cin >> c >> q;

    cout << fixed;
    cout << setprecision(2);
    cout << "Total: R$ " << q*un[c] << endl;

    return 0;
}