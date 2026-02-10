#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,c;
    double f;
    
    cin >> n;

    for(int i = 0;i<n;i++){
        c=0;
        cin>>f;

        while(f>1){
            f /= 2;
            c++;
        }

        cout << c << " dias" << endl;
    }

    return 0;
}