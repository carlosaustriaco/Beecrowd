#include <bits/stdc++.h>

using namespace std;

int main(){
    double d;
    string s;
    
    cin >> d;
    if ((d >= 0) && (d <= 25)){
        s = "[0,25]";
    }
    else if (d < 0){
        cout << "Fora de intervalo" << endl;
        return 0;
    }
    else if(d <= 50){
        s = "(25,50]";
    }
    else if(d <= 75){
        s = "(50,75]";
    }
    else if(d <= 100){
        s = "(75,100]";
    }
    else {
        cout << "Fora de intervalo" << endl;
        return 0;
    }

    cout << "Intervalo " << s << endl;

    return 0;
}