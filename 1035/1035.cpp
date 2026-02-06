#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, d;
    bool s = false;

    cin >> a >> b >> c >> d;

    if (b > c){
        if (d > a){
            if ((d+c) > (a+b)){
                if(c>0){
                    if(d>0){
                        if(a%2==0){
                            s = true;
                        }
                    }
                }
            }
        }
    }

    if(s){
        cout << "Valores aceitos" << endl;
    }
    else{
        cout << "Valores nao aceitos" << endl;
    }

    return 0;
}