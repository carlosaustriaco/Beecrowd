#include <bits/stdc++.h>

using namespace std;

int main(){
    int h1,h2,m1,m2;
    int t1,t2,t,h,m;

    cin >> h1 >> m1 >> h2 >> m2;

    if((h2<h1)||((h1==h2)&&(m2<=m1)))
        h2 += 24;
    
    t1 = h1*60+m1;
    t2 = h2*60+m2;
    t = t2-t1;
    h = t/60;
    t -= h*60;
    m = t;

    cout << "O JOGO DUROU " << h << " HORA(S) E " << m << " MINUTO(S)" << endl;

    return 0;
}