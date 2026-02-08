#include <bits/stdc++.h>

using namespace std;

int main(){
    double a,b,c;
    double n1,n2,n3;

    cin >> n1 >> n2 >> n3;

    if((n1>=n2)&&(n1>=n3)){
        a=n1;
        b=n2;
        c=n3;
    }
    else if((n2>=n1)&&(n2>=n3)){
        a=n2;
        b=n1;
        c=n3;
    }
    else{
        a=n3;
        b=n2;
        c=n1;
    }

    if (a>=(b+c)){
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else{
        if(pow(a,2)==(pow(b,2)+pow(c,2))){
            cout << "TRIANGULO RETANGULO" << endl;
        }
        else if(pow(a,2)<(pow(b,2)+pow(c,2))){
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
        else{
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }

        if((a==b)&&(a==c)){
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        else if((a==b)||(a==c)||(b==c)){
            cout << "TRIANGULO ISOSCELES" << endl;
        }
    }

    return 0;
}