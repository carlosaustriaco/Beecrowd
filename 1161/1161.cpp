#include <bits/stdc++.h>

using namespace std;

int main(){
    int m,n;
    long long int f1,f2;

    while(cin >> n >> m){
        f1=1;
        f2=1;

        if((n==0)||(n==1)){
            f1=1;
        }
        else{
            for(int i=2;i<=n;i++){
                f1 *=i;
            }
        }

        if((m==0)||(m==1)){
            f2=1;
        }
        else{
            for(int i=2;i<=m;i++){
                f2 *=i;
            }
        }

        cout << f1+f2 << endl;
    }


    return 0;
}