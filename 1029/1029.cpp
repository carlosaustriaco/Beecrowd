#include <bits/stdc++.h>

using namespace std;

int c;

int fib(int x){
    c++;
    if(x==0)
        return 0;
    if(x==1)
        return 1;
    return fib(x-1) + fib(x-2);
}

int main(){
    int n,x,r;

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> x;
        c = -1;//a primeira chamada não é recursiva
        r=fib(x);

        cout << "fib("<<x<<") = " << c <<" calls = " << r << endl;
    }

    return 0;
}