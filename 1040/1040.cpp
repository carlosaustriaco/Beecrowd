#include <bits/stdc++.h>

using namespace std;

int main(){
    double n1, n2, n3, n4, n5,m;

    cin >> n1 >> n2 >> n3 >> n4;

    m = (2*n1 + 3*n2+4*n3 + n4)/ 10;

    cout << fixed;
    cout << setprecision(1);
    cout << "Media: " << m << endl;

    if (m>=7){
        cout << "Aluno aprovado." << endl;
    }
    else if (m < 5){
        cout << "Aluno reprovado." << endl;
    }
    else{
        cout << "Aluno em exame." << endl;
        cin >> n5;

        cout << "Nota do exame: " << n5 << endl;
        m = (m+n5)/2;

        if(m > 5){
            cout << "Aluno aprovado." << endl;
        }
        else{
            cout << "Aluno reprovado." << endl;
        }

        cout << "Media final: " << m << endl;
    }

    return 0;
}