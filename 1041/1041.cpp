#include <bits/stdc++.h>

using namespace std;

int main(){
    double x, y;
    string str;

    cin >> x >> y;

    if((x==0)&&(y==0)){
        str = "Origem";
    }
    else if((x==0)&&(y!=0)){
        str = "Eixo Y";
    }
    else if ((x!=0)&&(y==0)){
        str = "Eixo X";
    }
    else if((x>0)&&(y>0)){
        str = "Q1";
    }
    else if((x<0)&&(y>0)){
        str = "Q2";
    }
    else if((x<0)&&(y<0)){
        str = "Q3";
    }
    else{
        str = "Q4";
    }

    cout << str << endl;

    return 0;
}