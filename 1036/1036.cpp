#include <bits/stdc++.h>

using namespace std;

int main(){
    double a, b, c;

    cin >> a >> b >> c;

    if (a == 0){
        cout << "Impossivel calcular" << endl;
        return 0;
    }

    double delta = b*b - 4*a*c;

    if(delta < 0){
        cout << "Impossivel calcular" << endl;
        return 0;       
    }

    cout << fixed;
    cout << setprecision(5);
    cout << "R1 = " << (-b + sqrt(delta))/(2*a) << endl;
    cout << "R2 = " << (-b - sqrt(delta))/(2*a) << endl;

    return 0;
}