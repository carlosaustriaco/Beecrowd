#include <bits/stdc++.h>

using namespace std;

int maior(int x, int y){
    return (x+y+abs(x-y))/2;
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << maior(c,maior(a,b)) << " eh o maior" << endl;

    return 0;
}