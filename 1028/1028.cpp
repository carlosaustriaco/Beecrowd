#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b,r;

    cin >> n;

    for(int i=0;i<n;i++){
        cin >> a >> b;

        while(b!=0){
            r=a%b;
            a=b;
            b=r;
        }

        cout << a << endl;
    }

    return 0;
}