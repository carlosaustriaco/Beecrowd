#include <bits/stdc++.h>

using namespace std;

int g(int a, int b, int c){
    if((a>=b)&&(a>=c)){
        return a;
    }
    else if((b>=a)&&(b>=c)){
        return b;
    }
    else{
        return c;
    }
}

int main(){
    int n,c,r,b,x,y;
    string s;

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> x >> y;
        r = pow(3*x,2)+pow(y,2);
        b = 2*pow(x,2)+pow(5*y,2);
        c=-100*x+pow(y,3);

        if(g(r,b,c)==r){
            s = "Rafael";
        }
        else if(g(r,b,c)==b){
            s = "Beto";
        }
        else{
            s = "Carlos";
        }

        cout << s << " ganhou" << endl;
    }
    
    return 0;
}